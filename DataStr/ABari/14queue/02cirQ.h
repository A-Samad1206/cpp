// Circular queue
#include<iostream>
using namespace std;

class CQ{ 
   int size; int *q;int f;int r; 

   public:
   CQ(){ size=5+1; q=new int[size]; f=r=0; }
   
   CQ(int size){ this->size=size+1; q=new int[size]; f=r=0; }
   
   void enqueue(int);
   
   int dequeue();
   
   int isFull(){ return r==size-1 || r+1==f ? 1:0; }
   
   int isEmpty(){ return r==f ? 1:0; }
   
   void display();
};

void CQ::enqueue(int x){ 
   int i=(r+1)%size; 
   if(i==f) cout<<"From enque Queue is full"<<endl;
   else { q[i]=x; r=i; }
}

int CQ::dequeue(){
   if(r==f)
      return 0;
   else{
      f=(f+1)%size;
      return q[f];
   }   
}

void CQ::display(){
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

// int main(){
//    CQ a;
//    for(int i=10;i<=70;i+=10) a.enqueue(i);
//    a.display();
//    return 0;
// }