#include<stdio.h>
main()
{
	int i,num;
	printf("Please enter the size:-\n");
	scanf("%d",&num);
	printf("\nPlease enter the numbers:-\n");
	int tot[num];	
	for(i=0;i<num;i++)
	{
		scanf("%d",&tot[i]);
	}
	printf("\nEven numbers are:-");
	for(i=0;i<num;i++)
	{
		if(tot[i]>0)
		{		
			if(tot[i]%2==0)
			{
				printf("\n%d",tot[i]);
			}
		}
	}
	
	printf("\nOdd numbers are:-");
	{
		if(tot[i]>0)
		{
			if(tot[i]%2==1)
			{
				printf("\n%d",&tot[i]);
			}
		}
	}
	return 0;
}
