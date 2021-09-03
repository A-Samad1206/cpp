#include<stdio.h>
int xstrlen(char *);
main()
{
	char str[100];
	printf("Please enter the name:-\n");
	gets(&str[0]);
	int x=xstrlen(&str[0]);
	printf("No of characters is-%d",x);
	return 0;
}
int xstrlen(char *str)
{
	int i,j;
	for(i=1;str[i]!='\0';i++)
	{}
	return i;
}
