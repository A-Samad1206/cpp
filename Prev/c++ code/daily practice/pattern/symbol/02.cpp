#include<iostream>
using namespace std;
main()
{
   int i,j,row,t=1,count=0;
   char c=65;
   cout<<"Enter the values"<<endl;    cin>>row;
   for(i=1;i<=row;i++)
   {
   	t=1;
   		for(j=1;j<=2*row-1;j++)
   		{
   			if(j>=row-(i-1) && j<=row+(i-1))
   			{
   				cout<<++count<<" ";
				//cout<<"*";
				//cout<<i;
				//cout<<c++<<" ";
				//cout<<t++;    //have to make t=>1,bcoz  /*line 10 is crucial*/
			}
			else
			{
				cout<<" ";
			}
			
   		}
   		cout<<endl;
	}
}
