#include<iostream>
using namespace std;
#include "com.h"

int partition(int *A,int l,int h){
   cout<<"Partitioning"<<endl;
   int pivot=A[l],i=l,j=h;
   do{
      cout<<"First"<<endl;
      do{i++;}while(A[i]<=pivot);
      do{j++;}while(A[j]>pivot);

      if(i<j) swap(&A[i],&A[j]);
   }while(i<j);

   swap(&A[l],&A[j]);
   return j;
}

void Quick(int *A, int l, int h){
   cout<<"Quick"<<endl;
   int j;
   if(l<h){
      j=partition(A,l,h);
      Quick(A,l,j);
      Quick(A,j+1,h);
   }
}


int main(){
   int a[]={11,13,7,12,16,9,24,5,10,3,INT32_MAX},n=10,i;
   // pri(a,n);
   Quick(a,0,n);
   pri(a,n);
   return 0;
}