#include<iostream>
using namespace std;

#include<stdio.h>

int main()
{
	int i=1,j=1;
	while(++i<=200)
	{
		j=0;//it was being stopped here bcoz it got modified to j=100;
				// in its absence it will execute 1st when i=1;till j=99
				// then again i=2 & j++ =101 till 150 then stop execute 
				//further when control omes to inner loop bcoz j=150 satisfied.
		while(++j<=150)
		{
			if(j==100)
			 break;
			else
			 printf("%d\t%d\n",i,j);
		}
	}
	return 0;
}
