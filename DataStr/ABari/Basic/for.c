#include<stdio.h>
void swap(int* a,int* b);
int main(){
    int arr[6]={1,2,3,4,5};
    int length=5,index=5;
    swap(arr+1,arr+2);
    for(int i=0;i<length;i++)printf("%d\t",arr[i]);
    /*
    for(int i=index-1;i<length-1;i++)arr[i]=arr[i+1];
    length--;
    printf("\n==========Back Shift=====================\n");

    for(int i=0;i<length;i++)printf("%d\t",arr[i]);
    printf("\n==========Forward Shift=====================\n");
    for(int i=length-1;i>=index-1;i--)arr[i+1]=arr[i];
    length++;
    arr[index-1]=354654;
    for(int i=0;i<length;i++)printf("%d\t",arr[i]);
    */
   return 0;
}
    void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;   
    }
