#include<iostream>
using namespace std;
void sum1();
void sum2();
double fact(int);
main()
{
	
    sum1();
    sum2();
}
void sum1()
{
	int limit;
    cout<<"Enter the no. ";   cin>>limit;
	int i;
	double sum;
	for(i=1;i<=limit;i++)
	{
		sum=sum+(1.0/i);
	}
	cout<<"Total sum of "<<endl;
	for(i=1;i<=limit;i++)
	{
		cout<<"1/"<<i;
		if(i==limit)
		{
			cout<<"=";
		}
		else if(i<limit)
		{
			cout<<"+";
		}
	}
	cout<<endl<<sum<<endl;
}
void sum2()
{
	int limit;
    cout<<"Enter the no. ";   cin>>limit;
	int i;
	double x,res;
	cout<<endl<<"RESULT OF "<<endl;
	for(int i=1;i<=limit;i++)
	{
		cout<<i<<"/"<<i<<"!";
		if(i==limit){
			cout<<"=";
		}
		else if(i<limit)
		{
			cout<<"+";
		}
	}
	for(i=1;i<=limit;i++)
	{
		x=fact(i);
		res=res+(double)(i/x);
		x=0;
	}
	
	cout<<res<<endl;
}
double fact(int limit)
{
	double res=1;
	
	for(int i=1;i<=limit;i++)
	{
		res=res*i;
	}
	return res;
}
