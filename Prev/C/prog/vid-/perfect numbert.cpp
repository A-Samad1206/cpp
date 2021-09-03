#include<stdio.h>
main()
{
	int i,sum,number;
	/*ctr=number/2;*/
	int arr[number]={0};
	sum=0;
	printf("Please enter a +ve integer to check it is perfect number:-\n");
	scanf("%d",&number);
	//ctr=number/2; it is not appropiate ar 123/2 is decimal.
	//int arr[number]={0};
	for(i=1;i<number;i++)
	{
		if(number%i==0)
		{
		
			arr[i]=i;
			sum=sum+i;
		}
		
	}
	printf("\nTHE FACTORS ARE:-\n");
	for(i=0;i<number;i++)	
	{
		//sum=sum+arr[i];
		printf("\n%d",arr[i]);
	}
	if(sum==number)
	{ 
		printf("\nYes,it is a perfect number");
	}
	return 0;

}
