//consider the number 21. Its proper divisors are 1, 3 and 7, and their sum is 11. 
//Because 11 is less than 21, the number 21 is deficient. 
//Its deficiency is 2 × 21 - 32 = 10.

//ABUNDANT NO. whose sum of prime factors is greater than the number itself.

#include<iostream>
using namespace std;
int dis_prime(int);
main()
{
	int ch,value,d; 
	cout<<"Enter the value"<<endl;   cin>>value;
	ch=dis_prime(value);
	if(ch>value)
	{
		cout<<"Value is abundant";
	}
	else if(ch<value)
	{
		cout<<"Value is DEFICIENT";
		d=(2*value)-(ch+value);
		cout<<endl<<"Deficiency is "<<d<<endl;
	}
}
int dis_prime(int num)
{
	int sum=0;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
