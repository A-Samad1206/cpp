//it needs decoding.
#include<stdio.h>
main()
{
	char name[6][20]={"Abdus Samad","Ahad","Shuaib"};
	int i,j;
	//printf("%c",*(*(name+14)));

	printf("01---------------\n");
	for(i=0;i<6;i++)
	{
		for(j=0;name[i][j]!='\0';j++)
		{	
	   		printf("%c",*(*(name+i)+j));
    	}
    	printf("\n");
	}
	
	printf("02---------------\n");
	
	for(i=0;i<6;i++)
	{
		for(j=0;name[i][j]!='\0';j++)
		{	
	   		printf("%c",name[i][j]);
    	}
    	printf("\n");
	}
	printf("03--------------\n");
	for(i=0;i<6;i++)
	{
		for(j=0;name[i][j]!='\0';j++)
		{	
	   		printf("%c",*(name[i]+j));
    	}
    	printf("\n");
	}
}
