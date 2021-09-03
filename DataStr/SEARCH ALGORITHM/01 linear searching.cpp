//LINEAR SEARCH
#include<iostream>
using namespace std;
void find(int,int*);
void printfline(int);
void dispaly(int ,int &arr);
main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	//dispaly(10,arr);
	printfline(55);
	int item;
	cout<<"Enter the value you want to search"<<endl; cin>>item;
	find(item,arr);
	return 0;
}
void find(int item,int *arr)
{
	int comparison=0,index=-1,i;
	for(i=0;i<10;i++)
	{
		comparison++;
		if(item==arr[i])
		{
			cout<<"["<<item<<" is present at position "<<i+1<<"]"<<endl;
		}
	}
}
void printfline(int l)
{
	for(int i=0;i<l;i++)
	{
		cout<<"=";
	}
	cout<<endl;
}
void display(int size,int &arr)
{
	cout<<"[";
	for(int i=0;i<size;i++)
	{
		cout<<arr+i;
	}
	cout<<"]"<<endl;
}
