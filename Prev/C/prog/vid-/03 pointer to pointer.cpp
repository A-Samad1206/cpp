#include<stdio.h>
main()
{
	int x=10,*p,**xp;
	p=&x;xp=&p;//here we intialise/assiigned pointer after declaration
	
	printf("Value of x:-\n%d\n",x);
	printf("\nValue of x:-\n%d\n",*p);
	printf("\nValue of x:-\n%d\n",**xp);
	
	
	printf("\nAddress of x:-\n%d\n",&x);
	printf("\nAddress of x:-\n%d\n",p);
	printf("\nAddress of x:-\n%d\n",*xp);
	
	printf("\nAddress of p:-\n%d\n",&p);
	printf("\nAddress of p:-\n%d\n",xp);
	
	printf("\nAddress of pp:-\n%d",&xp);
	
	return 0;
}
