//WAP TO OBTAIN PRIME FACTORS.
#include<stdio.h>
int primefact(int);
main()
{
	int num;
	printf("Pleae enter the number:-\n");
	scanf("&d",&num);
	int pf=primefact(num);
	if(pf>1)
	{
		printf("The prime factors are:-\n");
	}
	printf("%d",pf);
}
int primefact(int number)
{
	if(number<=0)
	{
		printf("PLEASE ENTER A POSITIVE NUMBER");
	}
	for(int i=2;i<number;i++)
	{
	    if(number%i==0)
	    {
	    	return i;
		}
	}
}

