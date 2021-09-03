// Stack using Linked List...
#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node *next;
   Node(){data=0;next=NULL;}
   Node(int d){data=d;next=NULL;}
};

class St{
      int len;
      Node *top;
      public:
     
      St(){len=0;top=NULL;}
      void push(int);
      int pop();
      int peek(int);
      int isEmpty(){return !top?1:0;}
      int isFull(){ Node *p=new Node;return p?1:0;}
      Node * nodeAt(int);
   void display();
};

void St::display(){
   cout<<"Stack is "; 
      if(!top)cout<<"empty";
      else {
         Node *t=top;
         for(;t;t=t->next){
            cout<<"\t"<<t->data;
         }
      }  
}

Node * St::nodeAt(int pos){
   if(pos>len || pos<0) return NULL;
   Node *t=top;
   for(int i=1;i<pos;i++) t=t->next;
   return t;
}

void St::push(int data){
   Node *t=new Node(data);
   if(t){ t->next=top;top=t;len++;}else cout<<"Stack overflow";
}

int St::pop(){
   int x=-1;
   if(top){
      Node *p=top;
      top=top->next;
      x=p->data;
      free(p);
      len--;
   }
   return x;
}

int St::peek(int pos){
   if(pos>len || pos<=0) return 0;
   else {
      Node *t=nodeAt(pos);
      return t->data;
   }
}

int main(){
   St s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.display(); 
  return 0;
}