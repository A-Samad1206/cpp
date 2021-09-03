#include<stdio.h>
main(){
	int n,temp,key,i,j;
	printf("Enter the size of array:-\t");scanf("%d",&n);
	int arr[n];
	printf("Enter the value:-\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	key=arr[i];
	j=i-1;
	while(j>=0 && arr[j]>key){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=key;
	}
	printf("The value in ascending order:-\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nThe value in decending order:-\n");
	for(i=n-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
}
