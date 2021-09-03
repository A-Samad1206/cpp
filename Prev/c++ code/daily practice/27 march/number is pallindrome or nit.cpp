#include<iostream>
using namespace std;
main()
{
	int i=0,temp,dig,num,rev=0;
	cout<<"Enter the number";
	cin>>num;
	temp=num;
	while(num>0)
	{
		dig=num%10;
		rev=rev*10+dig;
		num=num/10;
	}
	if(temp==rev)
	{
		cout<<"The number is pallindrome";
	}
	else
	cout<<"The number is not pallindrome.";
}
