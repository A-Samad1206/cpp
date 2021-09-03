#include<iostream>
using namespace std;
int pallin(int);
main()
{
	int x=pallin(153);
	cout<<x<<endl;
}
int pallin(int num)
{
	int sum=0,dig,temp=num;
	while(temp>0)
	{
		dig=temp%10;
		sum=sum+(dig*dig*dig);
		temp=temp/10;
	}
	if(sum==num)
	{
		return num;
	}
	else if(sum!=num)
	{
		return 0;
	}
}
