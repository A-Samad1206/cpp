// LL queue
#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node *next;
   Node(){data=0;next=NULL;}
};

class QL{
   Node *first,*last;   
   // int length;
   public:
   QL(){first=NULL;last=NULL;}
   void enqueue(int);
   Node * dequeue();
   void display(); 
};

void QL::enqueue(int x){  
   Node *n=new Node;
   n->data=x;
   if(first==NULL && last==NULL) first=last=n; 
   else{ last->next=n; last=n; }
}

Node * QL::dequeue(){
   Node *p=first;
   if(first==NULL) return NULL;
   else {
   p=first;
   first=first->next;
   return p;
}}

void QL::display(){
   cout<<"\nQueue is ";
   
   if(first==NULL && last==NULL) cout<<"empty..."<<endl;
   else for(Node *t=first;t;t=t->next) cout<<"\t"<<t->data;
}

int main(){
    QL q;
   q.enqueue(10);
    q.display();
    return 0;
}