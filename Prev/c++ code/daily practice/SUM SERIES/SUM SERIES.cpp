//all are working fine

#include<iostream>
using namespace std;
void ap();
void gp();
void ss3();//1^2+2^2+3^2=
double root(int,int);
void ss4();//((1)+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)
main()
{
	
}
void ap()
{
	int choice,num1,cd,num2;
	cout<<"Enter the first number"<<endl;
	cin>>num1;
	cout<<"Enter 1.For common difference"<<endl<<"2.For 2nd number"<<endl;
	cin>>choice;
	if(choice==1) { cin>>cd; }
	else if(choice!=1) { cin>>num2; cd=num2-num1; 	}
	int sum=0,res,loop;
	cout<<"Enter the how many time you want that progression"<<endl;
	cin>>loop;
	for(int i=1;i<=loop;i++)
	{
		res=num1+((i-1)*cd);
		sum=sum+res;
		cout<<res;
		if(i<loop)
		{
			cout<<",";
		}
		else if(i==loop)
		{
			cout<<"=";
		}
		
	}
	cout<<sum<<endl;
}
void gp()
{
	int loop,choice,num1,cr,num2;
	cout<<"Enter first number "<<endl;  cin>>num1;
	cout<<"Enter 1.For common ration"<<endl<<"2.For 2nd number"<<endl;
	cin>>choice;
	if(choice==1) { cin>>cr; }
	else if(choice!=1) { cin>>num2; cr=num2/num1; }
	cout<<"Enter the how many time you want that progression"<<endl;
	cin>>loop;
	long int res;
	for(int i=1;i<=loop;i++)
	{
		int x=i-1;
		res=num1*(root(cr,x));
		cout<<res;
		if(i<loop)
		{
			cout<<",";
		}
	}
}
double root(int base,int expo)
{
	double res=1;
	if(expo==0)
	{
		return 1;
	}
	else
	{
		for(int i=1;i<=expo;i++)
		{
			res=res*base;
		}
		//cout<<endl<<endl<<"FR"<<res<<endl<<endl;
		return res;
	}
}
void ss3()
{
	
	int limit;
	cout<<"Enter the limit"<<endl;  cin>>limit;
	///display
	cout<<"The result of sum series is"<<endl;
	for(int i=1;i<=limit;i++)
	{
		cout<<i<<"^2";
		if(i==limit)
		{
			cout<<"="<<endl;
		}
		else if(i<limit)
		{
		   	cout<<"+";
		}
	}
	double res=0;
	for(int i=1;i<=limit;i++)
	{
		res=res+(root(i,2));
	}
	cout<<res<<endl;
}
void ss4()
{
    int i,limit;
	cout<<"Enter the limit"<<endl;  cin>>limit;
	cout<<"(";
	for(int i=1;i<=limit;i++)
	{
		cout<<"(";
		for(int j=1;j<=i;j++)
		{
			cout<<j;
			if(j!=i)
			{
				cout<<"+";
			}
			if(j==i)
			{
				cout<<")";
			}
		}
		if(i<limit)
		{
			cout<<"+";
		}
		else if(i==limit)
		{
	    	cout<<")=";
		}
	}
	int sum=0;
	for(int i=1;i<=limit;i++)
	{
		for(int j=1;j<=i;j++)
		{
			sum=sum+j;
		}
	}
	cout<<sum<<endl;
}
