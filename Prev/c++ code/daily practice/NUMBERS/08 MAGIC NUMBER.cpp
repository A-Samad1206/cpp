//1458,,,1+4+5+8=18
// reverse is 81
//18*81=1458
#include<iostream>
using namespace std;
int magicno(int);
main()
{
	int x,size;
	cout<<"Enetr the range"<<endl;   cin>>size;
	cout<<"Following are tha magic no."<<endl;
	for(int i=0;i<=size;i++)
	{
		x=magicno(i);
		{
			if(x==i)
			{
				cout<<i<<endl;
			}
		}
	}
}
int magicno(int num)
{
	int temp=num,dig,sum=0,sumt,rev=0;
	while(num>0)
	{
		dig=num%10;
		sum=sum+dig;
		num=num/10;
	}
	sumt=sum;
	while(sumt>0)
	{
		dig=sumt%10;
		rev=rev*10+dig;
		sumt=sumt/10;
	}
	if(sum*rev==temp)
	{
		return temp;
	}
}
