//PRIME NUMBER ARE EXACTLY DIVISIBLE BY TWO NUMBERS. SO 1  IS NOT

#include<iostream>
using namespace std;
int prime(int);
void dis_prime(int);
void range_prime(int,int);
main()
{
	/*int c,num;
	cout<<"Enter the numebr."<<endl;  cin>>num;
	c=prime(num);
	if(c==1){ cout<<"Yes,"<<num<<" is a prime number"<<endl;}
	else{ cout<<"Nope, "<<num<<" is not a prime number"<<endl; dis_prime(num); }*/
	
	
	//FIND HOW MANY NUMBERS ARE PRIME IN B/W.
	int range1,range2;
	cout<<"Enter the range."<<endl;  
	cout<<"From  ";   cin>>range1;   
	cout<<endl<<"To  "; cin>>range2;
	range_prime(range1,range2);
	
}
int prime(int num)
{
	int count=0;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		return 1;
	}
	else if(count!=0)
	{
		return 0;
	}
}
void dis_prime(int num)
{
	cout<<"The number is divisible by ";
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<i;
			if(i==num/2)
			{
				cout<<" "; break;
			}
			else if(i<num)
			{
				cout<<",";	
			}
		}
	}
}
void range_prime(int range1,int range2)
{
	int c;
	cout<<"Following are the prime number b/w "<<range1<<" & "<<range2<<" are"<<endl;
	for(int i=range1;i<=range2;i++)
	{
		if(i!=1)
		{
			c=prime(i);
			if(c==1)
			{
				cout<<i<<endl;
				c=0;
			}
		}
	}
}
