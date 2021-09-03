#include<stdio.h>
int main(){
    int arr[5],size=5,j,key;
    printf("\nEnter the value in array:-\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe value in array are :-");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[i+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    printf("\nSorted values in array are :-");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}