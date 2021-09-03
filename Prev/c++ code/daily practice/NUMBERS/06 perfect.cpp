//SUM OF FACTORS IS EQUAL TO THAT NUMBER
#include<iostream>
using namespace std;
int perfect(int);
main()
{
	int x,size;
	cout<<"Enter the range"<<endl;  cin>>size;
	cout<<"Following are the perfect numbers"<<endl;
	for(int i=1;i<=size;i++)
	{
		x=perfect(i);
		if(x==i)
		{
			cout<<i<<endl;
		}
	}
}
int perfect(int num)
{
	int sum=0;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			//cout<<i<<endl;
			sum=sum+i;
		}
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
