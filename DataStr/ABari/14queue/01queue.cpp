// simple queue using array single two poineter 
#include<iostream>
using namespace std;

class Q {
   int size;
   int *q;
   int f;
   int r;
   public:
   Q(){
      size=6;
      f=-1;
      r=-1;
      q=new int[size];
   }
   Q(int x){
      size=x;
      f=-1;r=-1;q=new int[size];
   }
   int enqueue(int);
   int dequeue();
   void display();
   int isFull(){ return r==size-1 ? 1:0; }
   int isEmpty(){ return r==f ? 1:0; }
   int first(){ return r==f?-1111:q[f+1]; }
   int last(){ return r==f ?-1111:q[r]; }
};

int Q::enqueue(int x){
   return !isFull() ? q[++r]=x : 0; 
}

int Q::dequeue(){
   return isEmpty() ?-1:q[++f];
}

void Q::display(){
   cout<<"Queue is :- ";
   if(!isEmpty()) for(int i=f+1;i<=r;i++) cout<<"\t"<<q[i];
   else cout<<"empty ,nothing to display!!!"<<endl;
}

int main(){
   Q a(20);
   a.display();
   for(int i=1;i<=20;i++) a.enqueue(i*10);
   a.display();
   return 0;
}