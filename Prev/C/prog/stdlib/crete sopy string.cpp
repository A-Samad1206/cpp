#include<stdio.h>
void xstrcpy(char *,char *);
main()
{
	char str1[80]={0},str2[80]={0};
	printf("Please enter the name:-");
	gets(str1);
	xstrcpy(str2,str1);
	printf("%s",&str2[0]);
}
void xstrcpy(char *d,char *s)
{
	while(*s!='\0')
	{
		*d++=*s++;
	}
}
