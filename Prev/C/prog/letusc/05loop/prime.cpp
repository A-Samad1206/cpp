#include<stdio.h>
main()
{
	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	i=2;
	for(i=2;i<num;i++)//for(;i++<=num;)not working
	{
		if(num%i==0)
		{
			printf("Not a prime number.");
			break;
		}	
	}
	if(i==num)
	{
		printf("Number is prime.");
	}
}
