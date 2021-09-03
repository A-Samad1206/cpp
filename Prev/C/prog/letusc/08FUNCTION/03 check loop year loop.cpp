#include<stdio.h>
void leapchk(int);
main()
{
	int i,flag,year,loop;
	printf("ENTER HOW MANY YEAR HAVE TO CHECK:-\n");
	scanf("%d",&loop);
	
	for(i=0;i<=loop;i++)
	{
		printf("\n\nPlease enter the year to be check:-\n");
		scanf("%d",&year);
		leapchk(year);
	}
	
}
void leapchk(int year)
{
	int flag;
	if(year%4==0 || year%400==0 && year%100!=0)
	{
		printf("Yes,its a leap year.");
	}
	else
	{
		printf("No,its not a leap year.");
	}
}
