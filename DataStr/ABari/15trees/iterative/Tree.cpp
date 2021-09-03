#include<iostream>
using namespace std;
#include "../stackPlusQ.h"

class Tree{
   Node *root;
   public:
   int nodes;
   Tree(){root=NULL;nodes=0;}

   void create(int *);
   void createSorted(int);
   void createSortedBy(int);

   void Preorder();
   void Postorder(); 
   void Inorder(); 
   void Levelorder();

   void del(int);
   Node * search(int);  
};

void Tree::Preorder(){
   Stack st;
   Node *t=root;
   while(t!=NULL || !st.isEmpty()){
      // cout<<endl<<t<<" ["<<(t!=NULL) <<","<<!st.isEmpty()<<"] Out "<<st.isEmpty()<<endl;
      if(t){
         // cout<<"First"<<endl;
         cout<<t->data<<" ";
         st.push(t);
         t=t->lc;
      }
      else {
         // cout<<"Second"<<endl;
         t=st.pop();
         t=t->rc;
      }
   }
}

void Tree::Postorder(){
    Node *t=root;
    Stack st;
    long int temp;
    while(!st.isEmpty() || t!=NULL){
      //  cout<<"Out "<<t<<endl;
       if(t){
      //  cout<<"First"<<endl;
          st.push(t);
          t=t->lc;
       }else{
      //  cout<<"Second"<<endl;
          temp=(long int)st.pop(); 
          if(temp>0){     
      //  cout<<"Second One"<<endl;
             st.push((Node *)-temp);
             t=((Node *)temp)->rc;
          }  else{ 
      //  cout<<"Second Two"<<endl;
             cout<<((Node *)(-temp))->data<<" ";
             t=NULL;
          }

       }
    }  
}

void Tree::Inorder( ){
   Node *t=root;
   Stack st;
   while(!st.isEmpty()||t!=NULL){
      if(t){
         st.push(t);
         t=t->lc;
      }else{
         t=st.pop();
         cout<<t->data<<" ";
         t=t->rc;
      }
   }
}

void Tree::Levelorder(){
   Node *p=root;
   Queue q(100);
   cout<<p->data<<" ";
   q.enqueue(p);
   while(!q.isEmpty()){
      p=q.dequeue();
      if(p->lc){
         cout<<p->lc->data<<" ";
         q.enqueue(p->lc);
      }
      if(p->rc){
         cout<<p->rc->data<<" ";
         q.enqueue(p->rc);
      }
   }

}

void Tree::create(int *arr){
   Node *p,*t;
   int x,y=0;
   Queue q(100);
   // cout<<"Enter root value :- \t";cin>>x;
   x=arr[y++];
   root = new Node(x);
   nodes++;
   
   q.enqueue(root);
   while(!q.isEmpty()){
      p=q.dequeue();
      // cout<<"Enter left child of "<<p->data<<"\t";cin>>x;
      x=arr[y]==-1 ? -1:arr[y++];   
      if(x!=-1){
         t=new Node(x);
         nodes++;
         p->lc=t;
         q.enqueue(t);
      }   
      // cout<<"Enter right child of "<<p->data<<"\t";cin>>x;
      x=arr[y]==-1 ? -1:arr[y++];   
      if(x!=-1){
         t=new Node(x);
         nodes++;
         p->rc=t;
         q.enqueue(t);
      }   
   }

}

void Tree::createSorted(int key){
   Node *n,*t=root;
   if(t==NULL){ t=new Node(key); root=t; }
   else
   while(t){
      if(key < t->data){
         if(t->lc!=NULL) t=t->lc;
         else {
            n=new Node(key);
            t->lc=n;
            t=NULL;  
         }
      }else if(key > t->data){
         if(t->rc!=NULL) t=t->rc; 
         else{
            n=new Node(key);
            t->rc=n;  
         }
      }else if(key == t->data) break; 
   }
}

void Tree::createSortedBy(int key){
   Node *t=root,*r;
   if(t==NULL){t=new Node(key); root=t;}
   else {
      while(t){
         r=t;
         if(key==t->data) return;
         else if(key<t->data) t=t->lc;
         else if(key>t->data) t=t->rc;
      }
      t=new Node(key);
      key > r->data ? r->rc=t : r->lc=t;
   }
}

Node * Tree::search(int key){
   Node *t=root;
   while(t){
      if(t->data==key) return t;
      else t=key>t->data ? t->rc:t->lc;
   }
   return NULL;
}  

void Tree::del(int key){
   Node *t=root,*r;
   while(t){
      cout<<endl<<"One";
      r=t;
      if(key<t->data)t=t->lc;
      else if(key>t->data)t=t->rc;
      else if(key==t->data)break;
   }
   cout<<endl<<"r->data "<<r->data<<endl;
   key<r->data?r->lc=NULL:r->rc=NULL;
}

int main(){
   Tree t;
   int arr[50],i=0; 
   /*
   for(;i<15;i++) arr[i]=(i+1)*10;
   arr[i]=-1;
   t.create(arr);
   */
   // /* Sorted Create   
   for(;i<7;i++) t.createSortedBy((i+1)*10);
 
   cout<<"\nPreorder\n";
   t.Preorder();
   
   /*
   for(int i=0;i<10;i++){
      Node *n;
      int x;
      cout<<endl<<"Enter "<<"\t";
      cin>>x;
      n=t.search(x);
      if(n) cout<<"Search= "<<n->data<<endl;
      else cout<<"SearchOut= "<<n<<endl;
      
   }*/
   t.del(20);
   cout<<endl<<"PreOrder"<<endl;
   t.Preorder();
   return 0;
}