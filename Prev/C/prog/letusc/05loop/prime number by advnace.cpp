#include<stdio.h>
main()
{
	int i,num;
	printf("Enter the number to check:\n");
	scanf("%d",&num);
	i=2;
	while(i<=num-1)
	{
		if(num%i==0)
		{
			printf("Number is not prime.");
			break;
		}
		i++;
	}
	if(i==num)
	{
		printf("\nThe number is prime.");
	}
}
