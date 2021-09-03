// #include<iostream>
using namespace std;
#include "node.h"

class Queue{ 
   int size;int f;int r; 
   // int *q;
   Node **q;   
   public:
   Queue(){ size=5+1; q=new Node*[size]; f=r=0; }
   
   Queue(int size){ this->size=size+1; q=new Node*[size]; f=r=0; }

   void enqueue(Node *);   
   Node * dequeue();
   int isEmpty(){ return r==f ? 1:0; }
   void display();
};

void Queue::enqueue(Node *x){ 
   int i=(r+1)%size; 
   if(i==f) cout<<"From enque Queue is full"<<endl;
   else { q[i]=x; r=i; }
}

Node * Queue::dequeue(){
   if(r==f)
      return 0;
   else{
      f=(f+1)%size;
      return q[f];
   }   
}

void Queue::display(){
   if(isEmpty()) cout<<"From Display Queue is empty"<<endl;
   else {
      int i=f+1;
      int till=(r+1)%size;
      cout<<"Queue are :- ";
      do{ 
         cout<<"\t"<<q[i];
         i=(i+1)%size; 
      }while(!(i==till));
   }
   cout<<endl;
}