#include<iostream>
using namespace std;
class Mat{
   int *Arr;
   int d;
   int n;
   public:
   Mat(){
      d=5;
      n=3*d-2;
      Arr=new int[n];
   }
      Mat(int d){
      this->d=d;
      n=3*d-2;
      Arr=new int[n];
   }
   void Set(int i,int j,int x);
   int Get(int i,int j);
   void Display();
   int Index(int i,int j){
      if(i-j==1) return j-1;
      else if(i==j) return (d-1)+(i-1);
      else if(j-i==1) return (2*d-1)+(i-1);     
   }
};
void  Mat::Set(int i,int j,int x){ 
   if(i-j==1||j==i||j-i==1) Arr[Index(i,j)]=x;
}
int Mat::Get(int i,int j){
   if(i-j==1||j==i||j-i==1) return Arr[Index(i,j)];
   else return 0;
}
void Mat::Display(){
   cout<<"Matrix is :- "<<endl;
   for(int i = 1; i <=d;i++){
      for(int j = 1; j <=d;j++)
         if(i-j==1 || i==j || j-1)
            cout<<Get(i,j)<<"\t";
         else cout<<0<<"\t";
   cout<<endl;
}
}
int main(){
   Mat m;
   int x=15;
   for(int i = 1; i <=5;i++)
      for(int j = 1; j <=5;j++)
         if(i-j==1 || i==j || j-i==1)
            m.Set(i,j,x++);
 
   m.Display();
   return 0;
}