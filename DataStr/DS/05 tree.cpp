#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* right;	
	struct node* left;
};
struct node *start;
void insert();
void inOrderr();
void preOrderr();
void postOrderr();
void inOrder(struct node *temp);
void preOrder(struct node *temp);
void postOrder(struct node *temp);
main()
{
	insert();
	insert();//insert();insert();insert();insert();insert();insert();insert();insert();
	inOrderr(); 
	//preOrderr();
	//postOrderr();
	return 0;
}
void insert()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	int value;
	cout<<"Enter the value to insert"<<endl; cin>>value;
	p->left=p->right=NULL;
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		struct node *q=start,*leaf;
		while(q)
		{
			leaf=q;
			if(q->data<value)
			{
				q=q->right;
			}
			else if(q->data>value)
			{
				q=q->left;
			}
		}
		if(q->data<value)
		{
			q->right=p;
		}
		else if(q->data>value)
		{
			q->left=p;
		}
	}	
}
void inOrderr()
{
	struct node *temp=start;
	inOrder(temp);
}
void preOrderr()
{
	struct node *temp=start;
	preOrder(temp);
}
void postOrderr()
{
	struct node *temp=start;
	postOrder(temp);
}
void inOrder(struct node *temp)
{
	cout<<"Data in tree as in order form is"<<endl;
	if(temp)
	{
		inOrder(temp->left);
		cout<<temp->data<<"  ";
		inOrder(temp->right);
	}
}
void preOrder(struct node *temp)
{
	cout<<"Data in tree as pre order form is"<<endl;
	if(temp)
	{
		cout<<temp->data<<"  ";
		preOrder(temp->left);
		preOrder(temp->right);
	}
}
void postOrder(struct node *temp)
{
	cout<<"Data in tree as post order form is"<<endl;
	if(temp)
	{
		postOrder(temp->left);
		postOrder(temp->right);
		cout<<temp->data<<"  ";
	}
}

