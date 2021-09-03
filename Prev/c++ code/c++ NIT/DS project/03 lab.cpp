#include<stdio.h>
main(){
	int n,sum=0;
	printf("Enter number of elements:-\t");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
			sum+=a[i];
	}
	printf("\nSum of array is:- %d\n",sum);
}
