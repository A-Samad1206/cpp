//WAP to retrieve character.
#include<stdio.h>
main()
{
	char str[]={"ABDUS SAMAD"};
	char *ps=str;
	int i;
	printf("01-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",*(ps+i));
	}
	printf("\n02-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",*(i+ps));
	}
	printf("\n03-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",ps[i]);
	}
	printf("\n04-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",i[ps]);
	}
	printf("\n05-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",*ps++);//IT IS FINE *(ps++). 
	}
	printf("\n06-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
	printf("\n07-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",i[str]);
	}
	printf("\n08-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",*(str+i));
	}
	printf("\n09-------------\n");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",*(i+str));
	}
}
