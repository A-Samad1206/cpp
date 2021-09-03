#include<iostream>
using namespace std;
#define size 5
int stack[size],top=-1;
void push();
void pull();
void traverse();
int isEmpty();
int isFull();
void length();
void peek();
main()
{
	while(1)
	{
		cout<<endl<<"ENTER YOUR CHOICE"<<endl;
		cout<<"1.PUSH"<<endl;
		cout<<"2.PULL"<<endl;
		cout<<"3.TRAVERSE"<<endl;
		cout<<"4.NO. OF DATA"<<endl;
		cout<<"5.PEEK"<<endl;
		int choice;
		cin>>choice;
		int t=0,n=0;
		switch(choice)
		{
			case 1:  push(); break;
			case 2: pull(); break;
			case 3: traverse();  break;
			case 4: length();  break;
			case 5: peek();  break;
			default: cout<<"Wrong number,Try again"<<endl;
		}
	
	}
	//return 0;	
}
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int isFull()
{
	if(top==size-1)
	return 1;
	else 
	return 0;}
void push()
{
	cout<<"Enter the element"<<endl;
	int x;cin>>x;
	if(isFull())
	{
 		cout<<"Stack is full,no sapce"<<endl;
 	}
	else 
	{
		top++; 
		stack[top]=x;/*cout<<"U inserted"<<endl;*/}
	}
void pull()
{
	if(isEmpty() ) 
	{
		cout<<"pstack is empty"<<endl;
	}
	else
	{
	 	//cout<<top <<"element is\t"<<stack[top];
		top--;
		cout<<"ELEMENT DELETED"<<endl;
	}
}
void traverse()
{
	if(isEmpty()) 
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"Elements on the stack are:-"<<endl;
	    int temp=top;
		while(temp>-1)
	   {
	   		cout<<stack[temp--]<<endl;
	   }
	}
}
void length()
{
	int temp=top;
	if(isEmpty())
	{
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"No. of data in stack is:-\t"<<temp+1<<endl;
	}
}
void peek()
{
	cout<<"Top most element in stack is:-\t"<<stack[top];
}
