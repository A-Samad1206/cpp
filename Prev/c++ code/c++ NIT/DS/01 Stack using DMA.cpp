#include<stdlib.h>
#include<iostream>
using namespace std;
int top=-1;
int * stack;

int capacity;
void create();
void append();
void display();
void pop();
void peek();
void reallocNode();
int length();
//void deleteS();
int isEmpty();
int isFull();
//int size();
main(){
	
	while(1){
		int ch;
		printf("\n\nYOUR CHOICE\n\n");
		printf("1.)Create\t");
		printf("2.)Append\t");
		printf("3.)Pop\t");
		printf("4.)Peek\t");
		printf("5.)Display\t");
		printf("6.)Size\t");
		printf("7.)Quit\t\n");
		printf("ENTER \t"); 
		scanf("%d",&ch);
		
		switch(ch)
		{	
				case 1 : create(); break;
				case 2 : if(isFull()){
							cout<<"\nStack is filled\t";
							char temp1;
							printf("\nTo create one more slot enter Y/N\t");
							cin>>temp1;
							if(temp1=='y' || temp1=='Y'){
							reallocNode();append();
							}
						  }
						   break;
				case 3 :  pop(); break;
				case 4 :  peek(); break;
				case 5 :  display(); break;
				case 6 :  cout<<"\nTotal length is\t"<<length();
				case 7 :  exit(0); break;
				default:  printf("Enter valid choice");
		}
	}
}

// FUNCTION DEFINITION

void create(){
	cout<<"\nCreate function";
	printf("\nEnter the no. of values to be stored in stack\t");
	scanf("%d",&capacity);
	stack=(int *)malloc(capacity*sizeof(int));
	for(int i=0;i<capacity;i++){
		int ele;
		printf("Enter the value:-\t");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
	}
}
void append(){
	if(isEmpty()){
		cout<<"\nAPPEND FUNCTION\n";
		cout<<"No stack exist\n\n";
	}
	else{
		int ele;
		printf("Enter the value:-\t");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
	}
}
void display(){
	for(int i=0;i<top+1;i++){
		printf("%d\t",stack[i]);
	}
}
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else if(top!=-1){
		return 0;
	}
}
int isFull(){
	if(top==capacity-1){
		return 1;
	}
	else if(top!=capacity-1){
		return 0;
	}
}
void pop(){
	top--;	
}
void peek(){
	if(isEmpty()){
		cout<<"\nNo stack exist";
	}
	else{
	cout<<"\nPeek value is :-"<<stack[top];
	}
}
void reallocNode(){
	int var2;
	cout<<"\nEnter no. of slot to add\t";cin>>var2;
	int *stack1;
	stack1=(int *)realloc(stack,var2*sizeof(int));
	stack=stack1;		
}
int length(){
	return top+1;
}
