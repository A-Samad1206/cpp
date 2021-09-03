#include<iostream>
using namespace std;
#include "com.h"

void merge(int *A,int m,int *B,int n,int *C){
   int i,j,k;
   i=j=k=0;
   while(i<m && j<n){ 
      if(A[i]==B[j]){ 
             C[k++]=A[i++];
            j++;
      }
      else if(A[i]<B[j]) 
         C[k++]=A[i++];
      else if(A[i]>B[j])
         C[k++]=B[j++];
   }
   for(;i<m;i++) C[k++]=A[i];
   for(;j<n;j++) C[k++]=B[j];
}

int main(){
   int A[]={11,12,13,14,15,16,17},m=7;
   int B[]={18,19,20,21,22,23,24},n=7;
   int C[14];
   merge(A,m ,B,m, C);
   cout<<endl<<endl;
   pri(C,m+n);
   return 0;
}