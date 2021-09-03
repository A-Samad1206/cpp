#include<iostream>
#include "com.h"
using namespace std;
void bubble(int * arr,int n,int l=0){
   int flag;
   int till=l ? l : n-1;
   for(int i=0;i<till;i++){
   flag=0;   
   for(int j=0;j<n-1-i;j++)
      if(arr[j]>arr[j+1]){ 
         swap(&arr[j],&arr[j+1]);
         flag=1;
   }
   if(flag==0)break;
   }
}


int main(){
   int n=6;
   int arr[n]={10,9,8,7,6,5};
   pri(arr,n);    
   bubble(arr,n,2);
   pri(arr,n);    
   return 0;
}
