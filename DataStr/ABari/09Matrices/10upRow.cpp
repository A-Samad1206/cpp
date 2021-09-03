#include<iostream>
using namespace std;
class Mat{
   int *Arr;
   int d;
   int n;
   public:
   Mat(){
      d=5;
      n=d*(d+1)/2;
      Arr=new int[n];
   }
   Mat(int d){
      this->d=d;
      n=d*(d+1)/2;
      Arr=new int[n];
   }
   void Set(int i,int j,int x);
   int Get(int i,int j);
   void Display();
   int Index(int i,int j){
      int x=(d-i)+1;
      return (d*(d+1)/2)-(x*(x+1)/2)+(j-i);
   }
};
void Mat::Set(int i,int j,int x){
     if(i<j || i==j)
      Arr[Index(i,j)]=x;
}
int Mat::Get(int i,int j){
     if(i<j || i==j)
      return Arr[Index(i,j)];
     return 0;
}
void Mat::Display(){
     for(int i=1;i<=d;i++){
      for(int j=1;j<=d;j++)
         if(i<j || i==j)
            cout<<Arr[Index(i,j)]<<"\t";
         else cout<<0<<"\t";     
      cout<<endl;
     }   

}
int main(){
   Mat m;
   int x=10;
    for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
     if(i<j || i==j)
      m.Set(i,j,x++);      
    }
    }
    m.Display();
   return 0;
}