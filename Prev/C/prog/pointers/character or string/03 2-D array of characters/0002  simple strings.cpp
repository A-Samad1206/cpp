//to retrieve string initial address is enough
#include<stdio.h>
main()
{
	char name[6][20]={"Abdus Samad","Ahad","Shuaib"};
	int i,j;
	printf("01---------------\n");
	for(i=0;i<3;i++)
	{	
	   	printf("%s\n",(name+i));
	}
	printf("02---------------\n");
	for(i=0;i<3;i++)
	{
		printf("%s\n",*(name+i));
	}
	printf("03---------------\n");
	for(i=0;i<3;i++)
	{
		printf("%s\n",&name[i]);
	}
	
}
