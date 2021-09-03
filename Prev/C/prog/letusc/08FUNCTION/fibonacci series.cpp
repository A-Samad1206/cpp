//FIBONACCI SERIES
#include<iostream>
using namespace std;
main()
{
	double limit,a=0,b=1,c;
	printf("Please enter the LIMIT:-\n");
	cin>>limit;
	cout<<"The series ia as following";
	for(int i=1;i<=limit;i++)
	{
		cout<<a<<endl;
		c=a+b;a=b;b=c;
	}
}
