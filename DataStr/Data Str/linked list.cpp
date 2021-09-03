#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *root;
int len;
//FUNCTIONS
void append();
void addAtBeg();
void addAtAfter();
void display();
void deletee();
int length();
main(){
	int ch;
	while(1){
		printf("\n\tLINKED LIST OPERATIONS:-\n");
		printf("01.)APPEND\n");
		printf("02.)Add At Begin\n");
		printf("03.)Add At Position\n");
		printf("04.)Display\n");
		printf("05.)Delete\n");
		printf("06.)Length\n");
		printf("07.)QUIT\n\n");
		
		printf("Enter Your Choice:-\t"); scanf("%d",&ch);
		
		int line;
		
		switch(ch){
			case 1 : append(); break;
			
			case 2 : addAtBeg(); break;
			
			case 3 : addAtAfter(); break;

			case 4 : display(); break;

			case 5 : deletee(); break;

			case 6 : line=length();
					 printf("Length is:-\t%d",line);
					 break;

//			case 7 : exit(1); break;

			default : printf("Enter a valid choice |||\n");
	}
	}
	
}


void append(){
	struct node* t;
	t=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value:-\t"); scanf("%d",&t->data);
	t->link=NULL;
	if(root==NULL){
		root=t;
	}
	else{
	struct node* t1=root;
	while(t1->link!=NULL){
		t1=t1->link;
	}
	t1->link=t;
	}
}
void addAtBeg(){
	if(root==NULL){
		printf("\tList is empty:-\n");
	}
	else{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter The data to prepend:-\t"); scanf("%d",&temp->data);
	temp->link=root;
	root=temp;	
	}
}
void addAtAfter(){
	int loc;
	printf("Enter the location:-\t"); scanf("%d",&loc);
	if(loc>length()){
		printf("Enter a valid location...\n");
	}
	else if(root==NULL){
		printf("No list existed till now.\n");
	}
	else{
	struct node * p=root;
	struct node * temp=(struct node*)malloc(sizeof(struct node));
	for(int i=1;i<loc;i++){
		p=p->link;
	}
	printf("Enter the value:-\t"); scanf("%d",&temp->data);
	temp->link=p->link;
	p->link=temp;	
	}
	
}
void display(){
	if(root==NULL){
		printf("\tList is empty:-\n");
	}
	else{
	struct node* t1=root;
	do{
		printf("%d\t",t1->data);
		t1=t1->link;
	}while(t1!=NULL);
	}	
}
void deletee(){
	int loc;
	printf("Enter location.:-\t"); scanf("%d",&loc);
	if(root==NULL){
		printf("\tList is empty:-\n");
	}
	else if(loc>length()){
		printf("Enter a valid location");
	}
	else if(loc==1){		
	struct node *temp=root;
	root=temp->link;
	temp->link=NULL;
	free(temp);
	}
	else if(loc<=length()){
		int i=1;
		struct node* p=root,* q;
//		struct node;
		while(i<loc-1){
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}

}
int length(){
		if(root==NULL){
		printf("\tList is empty:-\n");
		}
		else{
			int count=0;
			struct node* t1=root;
			while(t1!=NULL){
			count++;t1=t1->link;
		}
		return count;
}
		
}
