#include<iostream>
using namespace std;
struct node{
	int value;
	struct node* link;
};
//typedef struct node sn;
void insert();//1
int length();//2
void display();//3
void deletel();//4
void deletelAtBeg();//5
void deletelAtLast();//6
void search();//07
int len;
struct node* start=NULL;
main()
{
	return 0;
}
void insert()
{
	struct node* p;
	p=new struct node;
	cout<<"Enter the value"<<endl; cin>>p->value;
	p->link=NULL;
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		struct node* temp;temp=start;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=p;
	}
}
int length()
{
	struct node* temp=start;
	int count=0;
	while(temp!=NULL)
	{
		temp=temp->link;
		count++;
	}
	return count;
}
void display()
{
	if(start==NULL)
	{
		cout<<"List is null"<<endl;
	}
	else
	{
		struct node* temp;
		temp=start;
		cout<<"Data is"<<endl;
		while(temp!=NULL)
		{
			cout<<temp->value<<endl;
			temp=temp->link;
		}
	}
}
void deletel()
{
	int loc;
	cout<<"Enter the location"<<endl; cin>>loc;
	if(loc==1)
	{
		deletelAtBeg();
	}
	else if(loc>length())
	{
		cout<<"Enter value in range"<<endl;
	}
	else if(loc==length())
	{
		deletelAtLast();
	}
	else
	{
		struct node* temp;
		struct node*tempn;
		for(int i=1;i<loc-1;i++)//if loc=4 then till 3rd node,it means 2 loop.
		{
			temp=temp->link;
		}
		
		
		tempn=temp->link;
		temp->link=tempn->link;
		cout<<tempn->value<<"Dleteddd"<<endl;
		free(tempn);
	}
	
}
void deletelAtBeg()
{
	struct node* temp;
	temp=start;
	start=temp->link;
	cout<<temp->value<<"  Deleted"<<endl;
	free(temp);
}
void deletelAtLast()
{
	struct node* temp;
	temp=start;
	int loc=length();
	for(int i=1;i<loc-1;i++)//if loc=4 then till 3rd node,it means 2 loop.
	{
		temp=temp->link;
	}
	temp->link=NULL;
}
void search()
{
	int value,count=1;
	struct node* temp;
	temp=start;
	cout<<"Enter the value to search"<<endl; cin>>value;
	while(temp->value!=value)
	{
		temp=temp->link;
		count++;
	}
	cout<<value<<"  is present at "<<count<<" position"<<endl;
	
}
