// Stack using array.
#include<iostream>
using namespace std;
class St{
   int size;
   int *arr;
   int top;
   public:
   St(){
      size=5;arr=new int[size];top=-1;      
   }
   void push(int);
   int pop();
   int peek(int);
   int stackTop(){return top!=-1? arr[top]:0;}
   int isEmpty(){return top==-1?1:0;}
   int isFull(){return size-1==top?1:0;}
   void display();
};

int St::peek(int pos){
   int index=top-pos+1; 
   cout<<"Index="<<index<<endl;
   return  index>=0  ? arr[index] : 0;
}

void St::push(int item){
   if(!isFull()) arr[++top]=item; 
   else cout<<endl<<"Stack is full";
}
int St::pop(){
   return !isEmpty() ? arr[top--]:0;
}

void St::display(){
   cout<<endl<<"Stack is ";
   if(top==-1) cout<<"empty";
   else for(int i=0;i<=top;i++) cout<<"\t"<<arr[i];     
}

int main(){
   St s;
   for(int i=10;i<=10;i+=10) s.push(i);
   s.display();
   for(int i=1;i<=10;i++) cout<<"\nPeek="<<s.peek(i);
   s.display();
   
      return 0;
   }
