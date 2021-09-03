// Stack using Linked List for Tree Node 
// using namespace std;
#include "node.h" 

class SNode{
   public:
   Node *data;
   SNode *next;
   SNode(){data=0;next=NULL;}
   SNode(Node * d){data=d;next=NULL;}
};

class Stack{
      int len;
      SNode *top;
      public:
     
      Stack(){len=0;top=NULL;}
      void push(Node * data){
         SNode *t=new SNode(data);
         if(t){ t->next=top;top=t;len++;}else cout<<"Stack overflow";
      }
      Node* pop(){
         Node * x=0;
         if(top){
         SNode *p=top;
         top=top->next;
         x=p->data;
         free(p);
         len--;
      }
         return x;
      } 
      int isEmpty(){return !top?1:0;}
      int isFull(){ SNode *p=new SNode;return p?1:0;}
      void display(){
      cout<<"Stack is "; 
      if(!top)cout<<"empty";
      else {
         SNode *t=top;
         for(;t;t=t->next){
            cout<<"\t"<<t->data;
         }
      }  
}
};
  
class Queue{ 
   int size;int f;int r; 
   // int *q;
   Node **q;   
   public:
   Queue(){ size=5+1; q=new Node*[size]; f=r=0; }
   
   Queue(int size){ this->size=size+1; q=new Node*[size]; f=r=0; }

   void enqueue(Node *x){ 
   int i=(r+1)%size; 
   if(i==f) cout<<"From enque Queue is full"<<endl;
   else { q[i]=x; r=i; }
   }   
   Node * dequeue(){
   if(r==f)
      return 0;
   else{
      f=(f+1)%size;
      return q[f];
   }   
}
   int isEmpty(){ return r==f ? 1:0; }
   void display(){
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
};
 
 
 
 
// int main(){
//    Stack s;
//    for(int i=0;i<10;i++) {
//       Node *n=new Node;
//       s.push(n);}
//    for(int i=0;i<10;i++) {
//       // Node *n=new Node;
//       cout<<s.pop()<<endl;
//    }
//    // s.display(); 
//   return 0;
// }

