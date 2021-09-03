#include<stdio.h>
double pow(double,int);
main()
{
	double number;
	int expo;
	printf("Please enter the base value:-\n");
	scanf("%lf",&number);
	printf("PLease enter the exponent value:-\n");
	scanf("%d",&expo);
	double f=pow(number,expo);
	printf("The result is %lf",f);
	return 0;
}

double pow(double base,int expo)
{
	int i;
	double result=1;
	for(i=1;i<=expo;i++)
	{
		result=result*base;
	}
	return result;
}

