#include<stdio.h>
void swap(int *a,int *b);
main()
{
	int x,y,*xptr,*yptr;
	x=10;
	y=20;
	xptr=&x;
	yptr=&y;
	swap(xptr,yptr);
	
	printf("x is %d",x);
	printf("y is %d",y);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}
