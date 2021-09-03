#include<iostream>
#include<math.h>
using namespace std;
class Term{
   public:
   int coeff;
   int exp;
   Term(){
      coeff = 0;exp=0;
   }
};
class Poly{
   int n;
   Term *t;
   public:
   Poly(){n=0;}
   Poly(int n){
      this->n=n;
      // Term x[5];
      t=new Term[n];
      // t=x;
   }
   void create(int*,int*);
   void display();
   void evaluate();
   Poly add(Poly *);
};
void  Poly::create(int *c,int *e){
   if(!n){cout<<"Enter non-zero elements "<<"\t";
   cin>>n;
   t=new Term[n];
   }
   for(int i=1;i<=n;i++){
      t[i-1].coeff=c[i-1];
      t[i-1].exp=e[i-1];
      // cout<<i<<" Term "<<"\t";
      // cin>>t[i-1].coeff>>t[i-1].exp;         
   }   
}
void  Poly::display(){
   cout<<endl<<"Poly is :- \t";
   for(int i=0;i<n;i++){
      if(i!=0) cout<<"+";
      cout<<t[i].coeff<<"x"<<t[i].exp;       
   }   

}
void Poly::evaluate(){
   int sum=0,x;
   cout<<endl<<"Value of x = "<<"\t"; cin>>x;
   for(int i=0;i<n;i++){
         sum+=t[i].coeff+pow(x,t[i].exp);
   }
   cout<<endl<<"Evaluated is :- "<<sum;
}
Poly Poly::add(Poly *sec){
   cout<<endl;
   int i=0,j=0,k=0;
   Poly sum(n+sec->n);
   while(i<sec->n && j<n){ 
      if(t[i].exp == sec->t[j].exp){ 
         sum.t[k]=t[i];
         sum.t[k++].coeff=t[i++].coeff+sec->t[j++].coeff; 
      }
      else if(t[i].exp > sec->t[j].exp) 
         sum.t[k++]=t[i++]; 
      else if(t[i].exp < sec->t[j].exp)
         sum.t[k++]=sec->t[j++]; 
   }   
       
   for(;i<n;i++) sum.t[k++]=t[i];  
   for(;j<sec->n;j++) sum.t[k++]=sec->t[j]; 
   sum.n=k;
   return sum;
}

int main(){ 
    
   Poly p(5),q(5),sum;
   // int a[]={1,2,3,4,5};
   // int b[]={6,7,8,9,10};
   int d[]={5,4,3,2,1};
   int c[]={10,9,8,7,6};

   p.create(c,c);
   q.create(d,d);
   p.display();
   q.display();
   // p.evaluate();
   sum=p.add(&q);   
   sum.display();
 
   return 0;

}