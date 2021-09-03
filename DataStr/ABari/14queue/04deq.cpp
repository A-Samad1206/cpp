#include<iostream>
using namespace std;

class DEQ{
   int *arr;
   int f,r,size;
   public:
   DEQ(){ f=r=-1;size=5;arr=new int[size]; }
   void enqueue(int,int);
   int dequeue(int);
   void display();
};

void DEQ::enqueue(int x,int left=0){
   if(left) { if(f>-1) arr[f--]=x; else cout<<"\nCan't enqueue from left as f= "<<f; }
   else if(r<size-1) { arr[++r]=x;}
   else cout<<"Queue is full"<<endl;
}  

int DEQ::dequeue(int right=0){ 
   return right && r!=f ? arr[r--] : r!=f ? arr[++f] : -11;
}

void DEQ::display(){
   cout<<"\nQueue is ";
   if(f==r) cout<<"empty"<<endl;
   else for(int i=f+1;i<r+1;i++) cout<<"\t"<<arr[i];
}

int main(){
   DEQ d;
   d.enqueue(10);
   d.enqueue(20);
   d.enqueue(30);
   d.enqueue(40);
   d.enqueue(50);
   d.enqueue(60);
   d.enqueue(70);
   d.enqueue(80);
   d.display();  
   // cout<<endl<<"Deq= "<<d.dequeue()<<endl;
   // d.display();  

   return 0;
}