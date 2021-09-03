#include<iostream>
using namespace std;
int pos(int i,int j) {return i*(i-1)/2+j-1;}
class Matrix{
   int *Arr;
   int d;
   int n;
   public:
   Matrix(){
      d=5;
      n=d*(d+1)/2;
      Arr=new int[n];
   }
   Matrix(int d){
      this->d=d;
      n=d*(d+1)/2;
      Arr=new int[n];
   }
   void set(int i, int j,int x);
   int get(int i, int j);
   void display();
};
void Matrix::set(int i, int j,int x){ 
   if(i==j || i>j)
      Arr[pos(i,j)]=x;
}
int Matrix::get(int i, int j){
   if(i==j || i>j)
      return Arr[pos(i,j)];
   return 0;
}
void Matrix::display(){
   cout<<"Matrix is :-"<<endl; 
   for(int i=1;i<=d;i++){
   for(int j=1;j<=d;j++)
      cout<<get(i,j)<<"\t";   
   cout<<endl;
   }
}
int main(){
   int n=5,x=1;
   Matrix m;

   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         if(i>j || i==j){
            m.set(i,j,x);x++;
         }
      }
   }
   m.display();
   return 0;
}