//queue data structure.
#include<iostream>
using namespace std;
#define capacity 5
int queue[capacity];
int front=0;
int rear=0;
void insert();
void display();
void deleteq();
void length();
main()
{
	int n;
	cout<<"How many times you want"<<endl;
	cin>>n;
	if(n<=capacity)
	{
		for(int i=0;i<n;i++)
		{
			insert();
		}
	}
	else
	{
		cout<<"Enter valid"<<endl;
	}
	display();
	length();
	deleteq();
	length();
	display();
}
void insert()
{
	if(rear==capacity)
	{
		cout<<"Queue is full"<<endl;
	}
	else
	{
		int value;
		cout<<"Enter the value"<<endl; cin>>value;
		queue[rear]=value;
		rear++;
	}
}
void display()
{
	if(rear==front)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		int temp=front;
		cout<<"Data is"<<endl;
		for(int i=front;i<rear;i++)
		{
			cout<<queue[i]<<endl;
		}
	}
}
void deleteq()
{
	int value;
	cout<<"Enter the value to be deleted"<<"1. FIRST"<<endl<<"2. LAST "<<endl; cin>>value;
	if(value==1)
	{
		for(int i=0;i<rear;i++)
		{
			queue[i]=queue[i+1];
		}
	rear--;
	}
	else if(value==2)
	{
		rear--;
	}	
}
void length()
{
	cout<<"The length of queue is"<<rear<<endl;
}

