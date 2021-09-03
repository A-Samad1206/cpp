#include<stdio.h>
main()
{
	char name[6][12]={"Abdus Samad","Ahad","Shuaib"};
	int i,j;	
	printf("02---------------\n");
	for(i=0;i<6;i++)
	{
		for(j=0;name[i][j]!='\0';j++)
		{	
	   		printf("%s",(name+i)+j);//here,it stop woking like MD of integers properly.
	   		                        //at first i=i,j=0 it give address of strings and get printed
									//j>0,it give garbage value.  
    	}
    	printf("\n");
	}
}
