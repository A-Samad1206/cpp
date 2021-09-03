#include<stdio.h>
main(){
	int n,a=0,b=1,c;
	printf("Enter The Range:-\t");
	scanf("%d",&n);
	printf("\nFirst %d  Fibonacci numbers are:-\n\n",n);
	for(int i=0;i<=n;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}	
}
