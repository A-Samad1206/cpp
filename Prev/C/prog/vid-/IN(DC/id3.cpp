#include<stdio.h>
main()
{
	int z,y,x=10;
	y=--x;
	z=--x-++y;
	printf("%d\t%d\t%d",x,y,z);
	
}
