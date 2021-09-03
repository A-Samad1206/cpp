#include<stdio.h>
main()
{
	char *name[6];
	printf("Enter names:-\n");
	for(int i=0;i<6;i++)
	{
		scanf("%s\n",name[i]);
	}
	for(int i=0;i<6;i++)
	{
		printf("%s\n",name[i]);
	}
}
