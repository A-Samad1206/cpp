#include<iostream>
#include<stdio.h>
// #define SIZE 5
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
using namespace std;
struct set{
    // int *Arr;
    int Arr[15];
    int size;
    int length;// Indicate No. of element.

};
typedef struct set Set;
Set * Union(Set *,Set *);
Set * Intersection(Set *,Set *);
Set * Diff(Set *,Set *);
void Display(Set);
int main(){
   Set A={{2,6,10,15,22,25,32,423},10,8};
   Set B={{3,5,6,423,424},10,5};
   cout<<"Set A :- "<<endl;
   Display(A);
   cout<<"Set B :- "<<endl;
   Display(B);

   Set *C=Union(&A,&B);
   cout<<"Union :- "<<endl;
   Display(*C);
   Set *D=Intersection(&A,&B);
   cout<<"Intersection :- "<<endl;
   Display(*D);
   Set *E=Diff(&A,&B);
   cout<<"Diffrence :- "<<endl;
   Display(*E);
   return 0;
}
Set * Intersection(Set *A,Set *B){
   Set *C=(Set *)malloc(sizeof(Set));
   int i=0,j=0,k=0;
   while(i<A->length&&j<B->length){
      if(A->Arr[i]==B->Arr[j]){
         C->Arr[k++]=A->Arr[i++];
         j++;
      }
      else if(A->Arr[i]<B->Arr[j]) i++;
      else if(A->Arr[i]>B->Arr[j]) j++;
   }
   C->length=k;
   C->size=10;
   return C;
}

void Display(Set A){
   for(int i=0;i<A.length;i++){
      cout<<A.Arr[i]<<"\t";
   }
   cout<<endl;
}
Set * Union(Set *A,Set *B){ 
   Set *C=(Set *)malloc(sizeof(Set));
   int i=0,j=0,k=0;
   while(i<A->length  && j<B->length){
      if(A->Arr[i]<B->Arr[j]) 
         C->Arr[k++]=A->Arr[i++];
      else if(A->Arr[i]>B->Arr[j]) 
         C->Arr[k++]=B->Arr[j++];
      else{ 
         C->Arr[k++]=A->Arr[i++];
         j++;
      }
   }
   // Copy the remaining elements;
   for(;i<A->length;i++)
      C->Arr[k++]=A->Arr[i];
   for(;i<B->length;j++)
      C->Arr[k++]=B->Arr[j];
   
   C->length=k;
   C->size=10;
   return C;
}

Set * Diff(Set *A,Set *B){
   
   Set *C=(Set *)malloc(sizeof(Set));
   int i=0,j=0,k=0;
   while(i<A->length  && j<B->length){
      if(A->Arr[i]<B->Arr[j]) 
         C->Arr[k++]=A->Arr[i++];
      else if(A->Arr[i]>B->Arr[j]) j++;
      else if(A->Arr[i]==B->Arr[j]) {j++;i++;}
   } 
   cout<<i<<" Length "<<A->length<<endl;
   cout<<j<<" Length "<<B->length<<endl;
   
   // Copy the remaining elements;
   for(;i<A->length;i++)
      C->Arr[k++]=A->Arr[i];
   
   C->length=k;
   C->size=10;
   return C;
}

