#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
struct node *root=NULL;

void append();
void addAtStart();
void addAtEnd();
void addAtPos();//First

void display();
void displaySingle();//2 At Pos

void editFirst();
void editLast();
void editAtPos();//3

void deleteAll();
void deleteAtStart();
void deleteAtEnd();
void deleteAtPos();//4

int length();
void sort();//5
void swap();//6

struct node * createNode();
struct node * nodeAt(int);

int main(){
int len=0,ch;
	while(1){
	
		printf("\nLinked List operations are:-\n");
		printf("01.)Apppend\n");
		printf("02.)Add At Start\n");
		printf("03.)Add At End\n");
		printf("04.)Add At Pos\n");
		printf("05.)Display\n");
		printf("06.)Display Single\n");
		printf("07.)Edit First\n");
		printf("08.)Edit Last\n"); 
		printf("09.)Edit At Pos\n");
		
		printf("10.)Delete All\n");	
		printf("11.)Delete At Start\n");
		printf("12.)Delete At Last\n");
		printf("13.)Delete At Pos\n");
		
		printf("14.)Length\n");
		printf("15.)Sort\n");
		printf("16.)Swap\n");
		printf("17.)Exit");
		printf("\n\nEnter your choixe.\n");
		
		scanf("%d",&ch);
		switch(ch){
			case 1  : append(); 		break;
			case 2  : addAtStart();		break;
			case 3  : addAtEnd(); 		break;
			case 4  : addAtPos();		break;
			case 5  : display();		break;
			case 6  : displaySingle();	break;
			case 7  : editFirst();		break;
			case 8  : editLast();		break;
			case 9  : editAtPos();		break;
			case 10 : deleteAll();		break;
			case 11 : deleteAtStart();	break;
			case 12 : deleteAtEnd();	break;
			case 13 : deleteAtPos();	break;
			case 14 : len=length();
						printf("\nTotal Length Of List is\t:-\t%d",len);
						break;
			case 15 : sort();			break;
			case 16 : swap();			break;
			case 17 : exit(0);
			default :printf("Enter valid choice.");
		}
		
	}
	return 0;
}

void addAtPos(){
	int pos;
	printf("\nEnter Position");
	scanf("%d",&pos);
	if(pos>length()){
		printf("\nEnter valid location");
	}else{
	if(pos==length()){
		addAtEnd();
	}
	else{
	struct node *nNode=nodeAt(pos-1),*temp=createNode();
	temp->link=nNode->link;
	nNode->link=temp;
	}
	}


}
void editAtPos(){
	int pos;
	printf("\nEnter the location to edit");
	scanf("%d",&pos);
	struct node *temp=nodeAt(pos);
	printf("\nEnter data to Edit,....%d",temp->data);scanf("%d",&temp->data);
}
void deleteAtPos(){
	int pos;
	printf("\nEnter the location to delete");
	scanf("%d",&pos);
	struct node *temp=nodeAt(pos-1);
	temp->link=temp->link->link;
}
void sort(){}
void swap(){}
void displaySingle(){}

void append(){

	struct node *p,*temp=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter Your Value.\n");scanf("%d",&temp->data);
	temp->link=NULL;//This is most necessary
	if(root==NULL){
		root=temp;
	}
	else{
		p=root;
		while(p->link!=NULL){
			p=p->link;
		}
		p->link=temp;
	}
}

void addAtStart(){

	struct node *temp=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data\n"); scanf("%d",&temp->data);
	temp->link=root;
	root=temp;
	printf("\nDONE\n");
}

void addAtEnd(){
	if(root==NULL){
		printf("\nNo List occured.\n");
	}
	else{
	
struct node *temp=(struct node *)malloc(sizeof(struct node)),*p=root;
	printf("\nEnter the data\n"); scanf("%d",&temp->data);
	temp->link=NULL;
	while(p->link!=NULL){
		p=p->link;
	}
	p->link=temp;}		
}

void display(){
	if(root==NULL){
		printf("\nLIST IS EMPTY\n\n");
	}
	else{
		struct node *temp=root;
			while(temp!=NULL){
			printf("%d-->",temp->data);
			temp=temp->link;
		}
	}
}

void editFirst(){

	int temp;
	printf("Enter the value.\n");scanf("%d",&temp);
	root->data=temp;
}

void editLast()
{
	if(root==NULL){
		printf("\nNo List Occured\n");
	}else{
	struct node *p=root;
	int val;
	printf("\nEnter the data.\n");
	scanf("%d",&val);
	while(p->link!=NULL){
		p=p->link;
	}
	p->data=val;	
	}
}

void deleteAll(){

	root=NULL;
}

void deleteAtStart(){

	root=root->link;
}

void deleteAtEnd(){

	struct node *p=root;
	while(p->link->link!=NULL){
		p=p->link;
	}
	p->link=NULL;
}

int length(){

	if(root==NULL){
		return 0;
	}
	else{
	struct node *p=root;
	int count=0;
	while(p!=NULL){
		count++;
		p=p->link;
	}
	return count;
		
	}
}
struct node * nodeAt(int pos){
	if(pos<=length()){
    struct node *temp=root;
    for(int i=0;i<pos-1;i++){
        temp=temp->link;
    }
    return temp;
	}
	else{
		return NULL;
	}
}
struct node * createNode(){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data:-");scanf("%d",&n->data);n->link=NULL;
	return (n);
}
