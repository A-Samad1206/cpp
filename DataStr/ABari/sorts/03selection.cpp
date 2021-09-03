#include<iostream>
#include "com.h"
using namespace std;
void selection(int *arr,int n){
   int i,j,k;
   for(i=0;i<n-1;i++){
   for(j=k=i;j<n;j++) if(arr[j]<arr[k]) k=j;
   swap(arr[i],arr[k]);
   }
}

int main(){
   // int arr[]={8,6,3,10,9,4,12,5,2,7};
   int arr[10];
   for(int i=10;i>0;i--) arr[10-i]=(i)*10;
   pri(arr,10);
   selection(arr,10);
   pri(arr,10);
   return 0;
}