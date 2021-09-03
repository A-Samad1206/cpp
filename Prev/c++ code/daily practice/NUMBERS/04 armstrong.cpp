#include<iostream>
using namespace std;
int pallin(int);
main()
{
	int x,size;
	cout<<"Enetr the range"<<endl;   cin>>size;
	cout<<"Following are tha armstrong no."<<endl;
	for(int i=0;i<=size;i++)
	{
		x=pallin(i);
		{
			if(x==i)
			{
				cout<<i<<endl;
			}
		}
	}
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
