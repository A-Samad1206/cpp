//FIND PRIME NUMBER OR NOT
#include<iostream>
using namespace std;
main()
{
	int num,i,flag=0;
	printf("Enter the number");
	cin>>num;
    for(i=1;i<=num;i++)
    {
    	if(num/i==0)
    	{
    		flag++;
		}
	}
	if(flag==2)
	{
		cout<<"The number is prime";
	}
	else
	{
		//cout<<"The number is not prime bcox it is divisble by";
		for(i=1;i<=num;i++)
    	{
    		if(num/i==0)
    		{
    			cout<<endl<<i;
			}
		}
	}
	return 0;
}
