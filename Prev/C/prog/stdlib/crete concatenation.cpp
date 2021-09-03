#include<stdio.h>
void xstrcat(char *,char *,char *);
main()
{
	char str1[80]={0},str2[80]={0},str[160]={0};
	printf("Please enter the first string:-\n");
	gets(str1);
	printf("Please enter the second string:-\n");
	gets(str2);
	xstrcat(str1,str2,str);
	printf("Total is \n%s",str);
}
void xstrcat(char *s1,char *s2,char *r)
{
	int i,j;
	for(i=0;*s1!='\0';i++)
	{
		*r++=*s1++;
	}
	
	for(j=1;*s2!='\0';j++)
	{
		*r++=*s2++;
	}
}
