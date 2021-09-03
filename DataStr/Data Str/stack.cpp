#include<stdlib.h>
#include<stdio.h>
#define CAPACITY 10
int top=-1;
int stack[CAPACITY];
void create();
void push();
void pop();
void peek();
void traverse();
int isEmpty();
int isFull();
void size();
main(){
	int ch;
	while(1){
		printf("\n\tSTACK OPERATIONS:-");
		printf("\n01.)CREATE");
		printf("\n02.)PUSH");
		printf("\n03.)POP");
		printf("\n04.)PEEK");
		printf("\n05.)TRAVESE");
		printf("\n06.)SIZE");
		printf("\n07.)QUIT");
		printf("\n\nEnter Your Choice:-\t"); scanf("%d",&ch);
		switch(ch){
			case 1: push(); break;		
			case 2: push(); break;
			case 3 :pop(); break;
			case 4:peek();  break;
			case 5:traverse();  break;
			case 6:size();  break;
			default : printf("Enter valid option |||\n\n");
		}
	}
}

void push(){
	if(isFull()){
		printf("Stack is full.\n");
	}
	else{
		top++;
		int ele;
		printf("Enter the element.\t"); scanf("%d",&ele);
		stack[top]=ele;
	}
}
void pop(){
	if(isEmpty()){
		printf("Stack is empty.\n");
	}
	else{
		top--;
	}
}
void peek(){
	if(isEmpty()){
		printf("Stack is empty.\n");
	}
	else{
		int ele=stack[top];
		printf("Peek Element is:-\t%d",ele);
	}
}
void traverse(){
	for(int i=0;i<=top;i++){
		printf("[%d]\t,",stack[i]);
	}
}
int isEmpty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isFull(){
	if(top==CAPACITY-1){
		return 1;
	}
	else{
		return 0;
	}
}
void size(){
	if(isEmpty()){
		printf("Stack is empty.\n");
	}
	else{
	printf("Size is:-\t%d\n",top+1);
	}
}
