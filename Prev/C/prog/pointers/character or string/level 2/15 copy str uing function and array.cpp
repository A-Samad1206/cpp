#include<stdio.h>
void copystr(char *,char *);
main()
{
	char name1[]="AbdusSama";
	char name2[80]={0};
	copystr(name1,name2);
	printf("%s",name2);
}
void copystr(char *fa1,char *fa2)
{
	int i;
	for(i=0;fa1[i]!=0;i++)
	{
		*fa2++=*fa1++;
	}
	*fa2='\0';
}
