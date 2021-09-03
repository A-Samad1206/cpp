#include<iostream>
using namespace std;
#include "com.h"

int max(int *arr,int n){
   int t=arr[0];
   for(int i=1;i<n;i++)if(arr[i]>t)t=arr[i]; 
   return t;
}


void count(int *arr,int n){
   int m=max(arr,n)+1,i=0,j=0;
   
   int *temp=new int[m];
   
   for(;i<m;i++) temp[i]=0;
   
   for(i=0;i<n;i++) temp[arr[i]]++;
   
   i=j=0;
   while(i<m) if(temp[i]!=0){ arr[j++]=i;temp[i]--;} else i++;
}

int main(){ 
   int n=8;
   int arr[n]={10,54,254,54,53,4,452,254};
   // for(int i=n;i>0;i--) arr[n-i]=(i)*10;
   pri(arr,n);
   count(arr,n);
   pri(arr,n);
   return 0;

}