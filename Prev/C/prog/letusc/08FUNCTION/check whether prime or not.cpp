#include<stdio.h>
void prime(int);
main()
{
	int loop,result,num;
	printf("Please enter the number times to check:-\n");
	scanf("%d",&loop);
	for(int i=0;i<loop;i++)
	{
		printf("\nPlease enter the number:-");
		scanf("%d",&num);
		prime(num);
	}
	return 0;
}	
void prime(int number)
{
	int i=0,count=0;//always initialise variable.
	if(number<=0)
	{
		printf("Please enter a positive number.\n");
	}
	else  
	{   //prefer these brackets.
		for(i=1;i<number;i++)
			{
			if(number%i==0)
			count++;
			}
			if(count==1)
			printf("\n%d is prime number\n",number);
			else
			printf("\n%d is not a prime number\n",number);	 
    }
}

