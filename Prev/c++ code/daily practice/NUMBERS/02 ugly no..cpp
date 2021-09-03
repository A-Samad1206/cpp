//NUMBERS DIVIDED BY 2,3,5
#include<iostream>
using namespace std;
int ugly(int);
main()
{
	int c,num;  cout<<"Enter the value to check whether the number is ugly or not"<<endl; cin>>num;
	c=ugly(num);
	if(c==1){ cout<<"Yes,"<<num<<" is a ugly number"<<endl;}
	else{ cout<<"Nope, "<<num<<" is not a ugly number"<<endl; }
}
int ugly(int num)
{
	int count=0;
	if(num%2==0)
	{
		count++;
	}
	else if(num%3==0)
	{
		count++;
	}
	else if(num%5==0)
	{
		count++;
	}
	else return 0;
	if(count!=0)
	{
		return 1;
	}
}
