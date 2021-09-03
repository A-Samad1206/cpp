#include<stdio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node* link;
};
void append();
void addAtBeg();
void addAtAfter();//update
void deletee();
void diplay();
int length();
void deletev();
int find();
int len;
struct node * start;
main()
{
	int ch;
	while(1)
	{
		
		printf("SINGLE LINKED OPERATIONS\n");
		printf("1.Append(add at last)");
		printf("\n2.Add at begin\n");
		printf("3.Add at after\n");
		printf("4.Delete");
		printf("\n5.Display\n");
		printf("6.Length\n");
		printf("7.Quit\n");
		
		printf("ENTER YOUR CHOICE\t");
	    scanf("%d",&ch);
		switch(ch)
		{
			case 1: append(); break;
			case 2: addAtBeg(); break;
			case 3: addAtAfter(); break;
			case 4: deletee(); break;
			case 5: diplay(); break;
	        case 6: length(); break;
			case 7: exit(1); break;
			default: printf("Enter a valid choice\n");
		}
	}
}
void append()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value\n");
	scanf("%d",&temp->value);
	temp->link=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		struct node*p;
		p=start;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void addAtBeg()
{
	if(start==NULL)
	{
		printf("No list exist.");
	}
	else
	{
		struct node*temp;
	    temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the number\n");
		scanf("%d",&temp->value);
		temp->link=start;
		start=temp;
		printf("DONE");
		printf("\n\n");
	}
}
void addAtAfter()
{
	printf("Enter the location:-\t");int loc;
	scanf("%d",&loc);
	int x=length();
	if(loc>x)
	{
		printf("Enter a valid location & try again\n");
	}
	else
	{
		struct node* temp;
		int x;x=length();
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the number:\t");
		scanf("%d",&temp->value);
		struct node* p=start;
		for(int i=1;i<loc;i++)
		{
			p=p->link;
		}
		temp->link=p->link;
		p->link=temp;
	}
}
void deletee()
{
	int ch;
	printf("1.If u want deletion by location\n2.By value\n");
	scanf("%d",&ch);
	if(ch==2)
	{
		deletev();
	}
	else
	{
		int loc,x=length();
	printf("Enter the location\t");
	scanf("%d",&loc);
	if(loc>x)
	{
		printf("Enter a valid number\n");
	}
	else if(loc<=x)
	{
		struct node*temp=start;
	for(int i=1;i<loc-1;i++)
	{
		temp=temp->link;
	}
	struct node*p;
	p=temp->link;
	temp->link=p->link;
	free(p);
	}
		}	
}
void diplay()
{
	if(start==NULL)
	{
		printf("List is empty\n\n\n");
	}
	else
	{
		printf("Elements in list are:-\n");
		struct node * temp=start;
		while(temp!=NULL)//problem was due to temp->link;
		{
			printf("%d\t",temp->value);
			temp=temp->link;
		}
		printf("\n\n");
		free (temp);
	}
}
int length()
{
	int count=0;
	if(start==NULL)
	{
		printf("List is empty\n\n\n");
	}
	else
	{
		struct node* temp=start;
		
		while(temp!=NULL)
		{
			count++;
			temp=temp->link;
		}
		//printf("NO OF ELEMENTS IN LIST ARE:-%d\n\n",count);
	}
	len=count;
	return len;
}
int find()
{
	int count=0,num;
	printf("Enter the number\n");
	scanf("%d",&num);
	struct node*temp=start;
	while(temp->value!=num)
	{
		count++;
		temp=temp->link;
	}
	return count;
}
void deletev()
{
	int loc=find();
	if(loc==0)
	{
		printf("Enter a valid number\n");
	}
	else
	{
		struct node*temp=start;
	for(int i=1;i<loc-1;i++)
	{
		temp=temp->link;
	}
	struct node*p;
	p=temp->link;
	temp->link=p->link;
	free(p);
	}	
}
