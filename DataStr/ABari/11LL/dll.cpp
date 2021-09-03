#include<iostream>
using namespace std;
class Node{
   public:
   int data; Node *r; Node *l;
   Node(){
      r=NULL;l=NULL;
   }
};
class List{
   Node *root,*last;
   int length;

   public:
   List(){
      root=NULL;
      length=0;
   }
   void create(int,int*,int);
   void read(int);
   void update(int,int);
   void del(int);
   Node *nodeAt(int);
   void reverse();
   void middle();
};

void List::middle(){
   Node *p,*q;p=q=root;
   while(q){
      q=q->r;
      if(q)q=q->r;
      if(q)p=p->r;
   }
   cout<<"Middle Element is : -"<<p->data;
}


void List::reverse(){
   Node *p=root,*temp;
   last=p;
   int i=0;
   while(p){
      // cout<<endl<<"X = "<<p->r->data;
      temp=p->r;
      p->r=p->l;
      p->l=temp;
      p=p->l;
      // cout<<endl<<"SX = "<<p->r->data;
      if(p!=NULL && p->r==NULL) {
         // cout<<"P= "<<p->data;
         root=p;}
      // cout<<endl<<++i;
   }
}


Node * List::nodeAt(int pos){
   Node *n=root;
   for(int i=1;i<pos;i++){
      n=n->r;
   }
   return n;
}

void List::create(int pos=-1,int * arr=NULL,int n=0){
   cout<<endl;
   Node  *p=new Node,*temp=p;
   int x; 
   
   if(n && !root) {
     cout<<"First";
   root=p;
   last=p;
   p->data=arr[0];
   p->r=NULL;
   p->l=NULL;
   length++;
   int i=1;
   while(i<n){
      p=new Node;
      p->data=arr[i++];
      temp->r=p;
      p->l=temp;
      last=temp=p;length++;
   }
   }
   
   else if(pos==-1){
      cout<<"Second";
      cout<<"Enter data "<<"\t";cin>>x;
      p->data=x;
      p->l=last;
      last->r=p;
      length++;
      last=p;
     }
   
   else if(pos>0 && pos<=length){
      cout<<"Third";
      cout<<"Enter Pos"<<"\t";cin>>x;
      Node *t=nodeAt(x);
      cout<<"Enter Data"<<"\t";cin>>x;
      p->data=x;
      p->r=t->r;
      p->l=t;
      t->r->l=p;
      t->r=p;
      length++;      
   }

}

void List::read(int pos=-2){
   Node *n;
   
   if(pos >=-1 && pos<=length){
      if(pos==length || pos==-1)
      {cout<<"Node at "<<pos<<" "<<last->data;
      // n=nodeAt(length);
      // cout<<"Node at ByFun"<<pos<<" "<<n->data;
      }
      else if(pos==1)
      cout<<"Node at "<<pos<<" "<<root->data;
      
      else {
         n=nodeAt(pos);
         cout<<"Node at "<<pos<<" "<<n->data;
      }
   }
   else {

   cout<<"Display Doubly Linked List "<<endl;
   for(n=root;n;n=n->r) cout<<n->data<<"\t";
   }
}

void List::update(int pos,int item){
   if(pos>length) cout<<"Enter Valid Position"<<endl;
   else if(pos==1) root->data=item;
   else if(pos==-1 || pos==length) last->data=item;
   else { Node *n=nodeAt(pos); n->data=item; }
}

void List::del(int pos=-1){
   cout<<"Delete"<<endl;
   if(pos==1)  {  cout<<"DelFirst"; root=root->r; if(root) root->l=NULL; length--;}
   else if(pos==length) { cout<<"DelSecond"; last->l->r=NULL; last=last->l;length--; }
   else {
      cout<<"DelThird";
      if(pos==-1) pos=length;
      Node *n=nodeAt(pos);
      n->l->r=n->r;
      if(n->r) n->r->l=n->l;
      else last=n->l;
      length--;
   }            
}        
         
int main(){
   int arr[]={10,20,30,40,50,60,70,80,90,100,110};
   List l;
   l.create( 0, arr , 11);
   // l.read();  
   l.middle();
   // l.reverse();
   // l.read();  
}