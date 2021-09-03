#include<stdio.h>
main(){
	int n,temp,f=0,i,j;
	printf("Enter the size of array:-\t");scanf("%d",&n);
	int arr[n];
	printf("Enter the value:-\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){ 
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				f++;
			}
		}
	}
	printf("The value in ascending order:-\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("The value in decending order:-\n");
	for(i=n-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
	printf("\n%d",f);
}
