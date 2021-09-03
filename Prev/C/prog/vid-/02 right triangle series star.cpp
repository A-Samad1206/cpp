#include<stdio.h>
main()
{
	int i,j,row;
	printf("Please enter the number of rowns:-");
	scanf("%d",&row);
    for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			if(j>=row-(i-1) && j<=row)
			{
			    printf("*");			}
			else
			{ 
				printf(" ");
			}
		}
		printf("\n");    
    }
    
    

	return 0;
}
