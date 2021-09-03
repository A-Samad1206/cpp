#include<stdio.h>
int main()
{
	int i,sum=0,num1=0,num2=0;
	char c;
	start:
	printf("Enter the 1st number:\n");
	scanf("%d",num1);
	printf("Enter the 2nd number:\n");
	scanf("%d",num2);
	sum=num1+num2;
	
	printf("%d is the sum",sum);
	sum=num1=num2=0;
	printf("Enter y if want more calculation\n");
	scanf("%c",c);
	if(c=='y'|| c=='Y' )
	goto start;	
	return 0;
}
