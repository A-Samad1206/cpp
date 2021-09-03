#include<stdio.h>
main()
{
	int i;
	char name1[]="ABDUS SAMAD";
	char name2[50]={NULL};//ALWAYS DECLARE SIZE IT REPRINT SOME CHARACTERS
	char *str1=name1;
	char *str2=name2;
	for(i=0;name1[i]!=NULL;i++)//or *str1!=NULL or '\0'
	{
		name2[i]=name1[i];
	}
	int j=i;
	name2[j]='\0';//not work
	printf("%s\n",name2);
	//BY USING POINTERS
    for(i=0;*str1!=NULL;i++)
    {
    	*str2++=*str1++;
	}
	*str2=NULL;
    printf("%s",name2);
	return 0;
	
}

