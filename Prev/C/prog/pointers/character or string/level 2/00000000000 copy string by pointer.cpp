#include<stdio.h>
main()
{
	int i;
	char name1[]="ABDUS SAMAD";
	char name2[]={NULL};
	char *str1=name1;
	char *str2=name2;
	for(i=0;*str1!='\0';i++)
	{
		*str2++=*str1++;
	}
	*str2=NULL;
	printf("%s",*str2);
	printf("\n%d",*str2);
	//printf("%c",*str2);
	str2=name2;//it is very imporatant.
	printf("\n%s",str2);
	return 0;
}

