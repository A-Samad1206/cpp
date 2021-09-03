#include<iostream>
using namespace std;
#define SIZE 5;
class Diag{
   private:
   int *Arr;
   int n;
   public:
   Diag(){
      n=5;
      Arr=new int[5];
   }
   Diag(int n){
      Arr=new int[n];
      this->n=n;
   }
   void Set(int i,int j,int x);
   int Get(int i,int j);
   void display();

   ~Diag(){ delete []Arr; }  

};
void Diag::Set(int i,int j,int x){
      if(i==j)
         Arr[i-1]=x;
}
int Diag::Get(int i,int j){
      if(i==j) return Arr[i];
      else return 0;
}
void Diag::display(){
      cout<<"Elements of matrix are :- "<<endl;
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if (i==j) cout<<Arr[i]<<"\t";
            else cout<<0<<"\t";        
         }  
         cout<<endl;
      }  
} 

int main(){
   Diag m(5);
   int x=10;
   for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
         if(i==j){cout<<"Enter ["<<i<<"]["<<j<<"] elem :- ";
         // cin>>x; 
         m.Set(i,j,x+1);
         }
      }
   }

   m.display();
   return 0;
}