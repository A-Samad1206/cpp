#include<iostream>
using namespace std;
int *queue,size,front=0,rear=0;
void insert();
void display();
void deleteq();
void length();
main()
{
	insert();
	display();
    deleteq();
    length();
    display();
}
void insert()
{
	cout<<"Enter the no. of data,you want to insert"<<endl; cin>>size;
	queue=new int[size];
	if(rear!=size)
    {
    	for (int i=0;i<size;i++)
    	{
    		cout<<"Enter the element"<<endl;
			cin>>queue[i];
			rear++;
		}
	}
	else if(rear==size)
	{
		cout<<"Stack is full"<<endl;
	}
}
void display()
{
	cout<<"Data elements are"<<endl;
	for(int i=0;i<rear;i++)
	{
		cout<<queue[i]<<endl;
	}
}
void deleteq()
{
	int value;
	cout<<"Enter the value to be deleted"<<"1. FIRST"<<endl<<"2. LAST "<<endl; cin>>value;
	if(value==1)
	{
		for(int i=front;i<rear;i++)
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

