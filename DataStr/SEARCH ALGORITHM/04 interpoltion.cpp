//INTERPOLATION SEARCH
#include<iostream>
using namespace std;
int interpolation(int,int*,int);
main()
{
	int arr[12]={0,1,2,3,4,5,6,7,8,9,10,11};
	int i=interpolation(9,arr,12);
	cout<<endl<<i<<endl;
}
int interpolation(int e,int *arr,int size)
{
	int start=0,end=size-1,pos;
	while(start<=end && e>=arr[start] && e<=arr[end])
	{
		pos=start+(((double)(end-start)/(arr[end]-arr[start]))*(e-arr[start]));
		if(e==arr[pos])
		{
			return pos;
		}
		if(e>arr[pos])
		{
			start=pos+1;
		}
		else 
		{
			end=pos-1;
		}
		}
		return -1;
}
