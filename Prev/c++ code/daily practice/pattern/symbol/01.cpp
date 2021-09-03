#include<iostream>
using namespace std;
main()
{
	int i,j,num,count=0;
	cout<<"Enter number:-   ";  cin>>num;
	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<++count<<" ";
		}
		cout<<endl;
	}
}
