#include<stdlib.h>
#include<stdio.h>
#define CAPACITY 10
int front=0,rear=0;
int queue[CAPACITY];
void create();
void push();
void deletee();
void traverse();
main(){
	int ch;
	while(1){
		printf("\n\tSTACK OPERATIONS:-");
		printf("\n01.)CREATE");
		printf("\n02.)DELETE");
		printf("\n03.)TRAVESE");
		printf("\n04.)QUIT");
		printf("\n\nEnter Your Choice:-\t"); scanf("%d",&ch);
		switch(ch){
			case 1: create(); break;		
			case 2 :deletee(); break;
			case 3:traverse();  break;
			default : printf("Enter valid option |||\n\n");
		}
	}
}

void create(){
	if(rear==CAPACITY){
		printf("Stack is full.\n");
	}
	else{
		int ele;
		printf("Enter the element.\t"); scanf("%d",&ele);
		queue[rear]=ele;
		rear++;
	}
}
void deletee(){
	if(front==rear){
		printf("Stack is empty.\n");
	}
	else{
		for(int i=0;i<rear;i++){
			queue[i]=queue[i+1];
		}
		rear--;
	}
}
void traverse(){
	for(int i=rear-1;i>=front;i--){
		printf("[%d]\t,",queue[i]);
	}
}
