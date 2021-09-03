#include<stdio.h>
#include<string.h>
main()
{
	char name[80];
	printf("Please enter the name:");
	gets(name);
	int len=strlen(&name[0]);
	printf("%d",len);	
}
