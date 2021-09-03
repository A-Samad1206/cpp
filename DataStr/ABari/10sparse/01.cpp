#include<iostream>
using namespace std;
class Mat{
   struct Element{
      int i; int j;int x;
   };
   int m;
   int n;
   int num;
   struct Element *e;
   public:
   Mat(){

   }
   Mat(int m, int n,int num){
      this->m = m;
      this->n = n;
      this->num = num;
      e=new Element[num];
   }
   void create();
   void display();
   Mat   add(Mat *m);
   int getValue(int i,int j){
      for(int x=0;x<num;x++){
         if(e[x].i==i && e[x].j==j){
            return e[x].x;
            break;
         }
      }
      return 0;
   }
};
void  Mat::create(){
   cout<<"Enter dimension  "<<endl;
   cout<<"Row :- "<<"\t";
   cin>>m;
   cout<<"Column :- "<<"\t";
   cin>>n;
   cout<<"Enter Number of No-Zero Element :- "<<"\t";
   cin>>num;
   e=new Element[num];
   cout<<"Enter Elements"<<endl;
   for(int i=0;i<num;i++){
      cout<<"X-cord ="<<"\t";cin>>e[i].i;
      cout<<"Y-cord ="<<"\t";cin>>e[i].j;
      cout<<"["<<e[i].i<<"]["<<e[i].j<<"] ="<<"\t";cin>>e[i].x;
   }
   cout<<"==== Input End ===="<<endl;
}
void  Mat::display(){
   cout<<"Matrix is :-"<<endl;
   int k=0;
   for(int i=1;i<=m;i++){
      for(int j=1;j<=n;j++){
            if(e[k].i==i && e[k].j==j){
               cout<<e[k++].x<<"\t";
            }else cout<<0<<"\t";
            // cout<<getValue(i,j)<<"\t";
      }
      cout<<endl;      
   }
   
   cout<<"Matrix End... "<<k<<endl;
}
Mat Mat::add(Mat *sec){
   if(sec->m!=m || sec->n!=n){
   Mat m;
   cout<<"Cannot be added."; return m;
   }else {
      Mat sum(m,n,sec->num+num); 

      int i=0,j=0,k=0;

      // cout<<sec->num<<" Non-Zero "<<num<<"  "<<sum.num<<endl;
      while(j<sec->num && i<num){
         // cout<<endl<<"--------------"<<endl;
         // cout<<"Initial Index = "<<i<<","<<j<<endl;
         // cout<<e[i].i<<" F "<<e[i].j<<" = "<<e[i].x<<endl;
         // cout<<sec->e[j].i<<" S "<<sec->e[j].j<<" = "<<sec->e[j].x<<endl;

         if(e[i].i < sec->e[j].i){
            // cout<<"One"<<endl;
            // sum.e[k].i = e[i].i;
            // sum.e[k].j = e[i].j;
            // sum.e[k++].x = e[i++].x; 
            sum.e[k++] = e[i++]; 
         }else if(e[i].i >sec->e[j].i){
            // cout<<"Two"<<endl; 
            sum.e[k++] = sec->e[j++];
         }else{
            if(e[i].j < sec->e[j].j){
            //   cout<<"Three"<<endl; 
              sum.e[k++] = e[i++];
            }else if(e[i].j > sec->e[j].j){
               // cout<<"Four"<<endl; 
               sum.e[k++] = sec->e[j++];
            }else {
               // cout<<"Five"<<endl;
               sum.e[k] = e[i++];
               sum.e[k++].x += sec->e[j++].x; 
            }
         }
         // cout<<"Final Index = "<<i<<" "<<j<<" k ="<<k<<endl;
         // cout<<"***********************";
      }
      for(;i<num;i++) sum.e[k++]=e[i];
      for(;j<sec->num;j++) sum.e[k++]=sec->e[j];
      sum.num=k;
      return sum;
   } 
}

int main(){
   Mat m,n,x;
   m.create();
   // n.create();
   m.display();
   // n.display();
   // x=m.add(&n);
   // cout<<"New Matrix is "<<endl; 
   // x.display();  
   return 0;
}