//By nature adaptive 
// It is stable.
#include<iostream>
#include "com.h"
using namespace std;

void insertion(int * arr,int n){
   int j,x;
   for(int i=1;i<n;i++){
      j=i-1;
      x=arr[i];
      while(j>-1 && arr[j]>x){
         arr[j+1]=arr[j];
         j--;
      }
      arr[j+1]=x;
   }

}

int main(){
   int arr[5]={12,9,5,8,10};
   pri(arr,5);    
   insertion(arr,5);
   pri(arr,5);    
   return 0;
}