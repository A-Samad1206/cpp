#include<stdio.h>
int main(){
    int arr[5],size=5;
    printf("\nEnter the value in array:-\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe value in array are :-");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<size;i++){
        //on completion of one iteration max val bubble to right.
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nSorted values in array are :-");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}