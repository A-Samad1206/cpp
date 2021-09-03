//WAP TO ADD SUM OF DIGIT OF NUBERS.
#include<iostream>
using namespace std;
main()
{
	int num;
	printf("Enter the number");
	cin>>num;
	int dig,sum=0;
	while(num>0)
	{
		dig=num%10;
		sum=sum+dig;
		num=num/10;
	}
	cout<<sum/*+2*/;
}
