#include<stdio.h>
main()
{
	int x=10,y=20;
	int*const p=&x;//int* const p=&x;int *const p=&x;int * const p=&x; all are equal.

	printf("value of x:-\n%d",*p);
	printf("\n\naddress of x:-\n%d",p);
	printf("\n\nAddress of p:-\n%d",&p);
	
	*p=y;
	//p=&y; it is wrong.not possible in constant pointer.
	printf("\n\nvalue of y:-\n%d\n",*p);
	printf("\nvalue of x:-\n%d",*p);
	
	printf("\n\nAddress of x:-\n%d",&x);
	printf("\n\nAddress of y:-\n%d",&y);
	printf("\n\nAddress of p:-\n%d",&p);
	
	
	return 0;
}
