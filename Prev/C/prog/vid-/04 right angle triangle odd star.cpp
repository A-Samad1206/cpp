
#include<stdio.h>

main()
{
	int i,j,row;
	printf("Please enter the number of rowns:-");
	scanf("%d",&row);
    for(i=1;i<=row;i++)
	{
		for(j=1;j<=2*row-1;j++)
		{
			if(j>=(((2*row-1)-(i-1))-(i-1)) && j<=(2*row-1))
				{
				printf("*");
				}
			else
			{ 
				printf(" ");
		    }	
		}
		printf("\n");    
    }
	return 0;
}
