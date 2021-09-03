#include<stdio.h>
main(){
	int n;
	printf("Enter number of elements:-\t");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\nYou entered:-\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
