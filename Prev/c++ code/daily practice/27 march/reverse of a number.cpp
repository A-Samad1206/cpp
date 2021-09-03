//WAP TO REVERSE THE NUMBER.
#include<iostream>
using namespace std;
main()
{
	int i=0,dig,num,rev=0;
	cout<<"Enter the number";
	cin>>num;
	while(num>0)
	{
		dig=num%10;
		rev=rev*10+dig;
		num=num/10;
	}
	cout<<endl<<rev;
}
