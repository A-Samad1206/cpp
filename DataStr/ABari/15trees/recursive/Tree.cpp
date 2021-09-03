#include<iostream>
using namespace std;
#include "../q.h"

class Tree{
   public:
   Node *root;
   int nodes;
   Tree(){root=NULL;nodes=0;}
   void create(int *);
   void Preorder(Node *);
   void Preorder(){Preorder(root);}
   void Postorder(Node *);
   void Postorder(){Postorder(root);}
   void Inorder(Node *);
   void Inorder(){Inorder(root);}
   void Levelorder(); 
   int Height(Node *);
   int Height(){return Height(root);}
   Node * search(Node*,int);
   Node * search(int key){ return search(root,key); }
   Node * createSorted(Node*,int);
   Node * createSorted(int key){ 
   if(root==NULL) return root= createSorted(root,key);
   else return createSorted(root,key); 
   }
   Node * del(Node*,int);
   Node * del(int key){return del(root,key);} 
   Node* InPre(Node*);
   Node* InSucc(Node*);
};
Node * Tree::search(Node* n,int key){
   if(n==NULL) return NULL;
   if(key==n->data) return n;
   else if(key<n->data) return search(n->lc,key);
   else return search(n->rc,key);
}
int Tree::Height(Node *r){
   int x=0,y=0;
   if(r==0)return 0; 
   x=Height(r->lc);
   y=Height(r->rc);
   return x>y ? x+1 : y+1;
}
void Tree::Preorder(Node *p){
   
   if(p){
      cout<<p->data<<" ";
      Preorder(p->lc);
      Preorder(p->rc);
   }
}
void Tree::Postorder(Node *p){
    
    if(p){
      Postorder(p->lc);
      Postorder(p->rc);
      cout<<p->data<<" ";
   }
}
void Tree::Inorder(Node *p){
  
 if(p){
      Inorder(p->lc);
      cout<<p->data<<" ";
      Inorder(p->rc);
   } 
}
void Tree::Levelorder(){
   Node *t=root;  
   Queue q(100);
   cout<<t->data<<" ";
   q.enqueue(t);
   while(!q.isEmpty()){
      t=q.dequeue();
      if(t->lc){
         cout<<t->lc->data<<" ";
         q.enqueue(t->lc);
      }
      if(t->rc){
         cout<<t->rc->data<<" ";
         q.enqueue(t->rc);
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
Node * Tree::createSorted(Node *p,int key){
   if(p==NULL)return new Node(key);
   if(key<p->data)p->lc=createSorted(p->lc,key);
   else if(key>p->data)p->rc=createSorted(p->rc,key);
   return p;     
}
Node * Tree::del(Node *p,int key){
   Node *q;
   if(p==NULL) return NULL;
   if(p->lc==NULL && p->rc==NULL){
      if(p==root)
         root=NULL;
      delete p;
      return NULL;
   }
   if(key < p->data) p->lc=del(p->lc,key);
   else if(key > p->data) p->rc=del(p->rc,key);
   else {
      if(Height(p->lc)>Height(p->rc)){
         q=InPre(p->lc);
         p->data=q->data;
         p->lc=del(p->lc,q->data);
      }
      else{
         q=InSucc(p->rc);
         p->data=q->data;
         p->rc=del(p->rc,q->data);
      }
   }
   return p;
 }
Node* Tree::InPre(Node* p){
   while(p && p->rc)
      p=p->rc;
   return p;
}
Node* Tree::InSucc(Node* p){
   while(p && p->lc)
      p=p->lc;
   return p;
}

int main(){
   Tree t;
   int arr[50],i=1; 
   for(;i<=15;i++) arr[i-1]=i*10;
   // arr[--i]=-1;
   // t.create(arr);
   // int arr[]={399,200,500,100,250,400,555};
   for(int x=0;x<i-1;x++){
      // int y;
      // cin>>y;
      t.createSorted(arr[x]);
   }

   cout<<endl<<"LevelOrder\t";
   t.Levelorder();
   cout<<endl<<"PostOrder\t";
   t.Postorder();
   cout<<endl<<"PreOrder\t";
   t.Preorder();
   cout<<endl<<"InOrder"<<"\t\t";
   t.Inorder();  
   for(int i=0;i<10;i++){ 
      int f;
   cout<<"Enter= \t";cin>>f;   
   t.del(f);
   cout<<endl<<"LevelOrder\t";
   t.Levelorder();
   }
   

   return 0;
}





