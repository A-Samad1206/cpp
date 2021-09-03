#include<iostream>
using namespace std;
int fact(int);
int strong(int);
main()
{
   int x,size;
	cout<<"Enetr the range"<<endl;   cin>>size;
	cout<<"Following are tha strong no."<<endl;
	for(int i=0;i<=size;i++)
	{
		x=strong(i);
		{
			if(x==i)
			{
				cout<<i<<endl;
			}
		}
	}	
}
int strong(int num)
{
	int temp=num,dig,sum=0;
	while(temp>0)
	{
		dig=temp%10;
		sum=sum+fact(dig);
		temp=temp/10;
	}
	if(num==sum)
	{
		return num;
	}
	else if(num!=sum)
	{
		return 0;
	}
}
int fact(int limit)
{
	double res=1;
	
	for(int i=1;i<=limit;i++)
	{
		res=res*i;
	}
	return res;
}
