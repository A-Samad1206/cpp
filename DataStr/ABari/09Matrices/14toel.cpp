#include<iostream>
using namespace std;
class Mat{
   int *Arr;
   int d;
   int n;
   public:
   Mat(){
      d=5;
      n=2*d-1;
      Arr=new int[n];
   }
      Mat(int d){
      this->d=d;
      n=2*d-1;
      Arr=new int[n];
   }
   void Set(int i,int j,int x);
   int Get(int i,int j);
   void Display();
   int Index(int i,int j){ 
      if(i==j || i<j) return j-i;
      else if(i>j) return (d-1)+(i-j); 
   }
};
void  Mat::Set(int i,int j,int x){  
    if (i==1 || j==1) Arr[Index(i,j)]=x;
}
int Mat::Get(int i,int j){ 
   return Arr[Index(i,j)];
}
void Mat::Display(){
   cout<<"Matrix is :- "<<endl;
   for(int i = 1; i <=d;i++){
      for(int j = 1; j <=d;j++)
            cout<<Get(i,j)<<"\t";     
   cout<<endl;
}
}
int main(){
   Mat m;
   int x=15;
   for(int i = 1; i <=5;i++)
      for(int j = 1; j <=5;j++)
         if(i==1 || j==1)
            m.Set(i,j,x++);
 
   m.Display();
   return 0;
}