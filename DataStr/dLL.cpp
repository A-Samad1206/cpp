#include<stdio.h>
#include<stdlib.h>
void append(); 		void addAtFirst(); 		void addAtPos();
void display(); 	void displayAtPos();
void editFirst(); void editLast(); 			void editAtPos();
void delFirst(); 	void delLast(); 			void delAll(); void delAtPos();//1

int length(); 		void sort(); 					void swap();
void  listIsEmpty();
void lengthExceed();
typedef struct node NODE;
struct node {
	int data;
	NODE *right;
	NODE *left;
};
NODE * find(int); 
NODE * crNode();
NODE *ROOT=NULL;
int main(){

	int ch,len;

	while(1){
		printf("\nEnter Your Choice");
		printf("1.)Append\t2.)Add At First\t3.)Add At Pos\n");
		printf("04.)Display\t05.)Display At Pos\n");
		printf("06.)Edit First\t07.)Edit Last.\t08.)Edit At Pos\n");
		printf("09.)Delete First\t10.)Delete Last\t11.)Delete At Pos\n");
		printf("12.Length\t13.)Swap\t14.)Sort\n");
		printf("15.Delete All");
		printf("16.Exit");
		printf("\n\n\tENTER YOUR CHOICE.\n\n"); scanf("%d",&ch);
		switch(ch){
			case 1: append(); 				break; 
			case 2: addAtFirst();			break;
			case 3: addAtPos();  			break;
			case 4: display();				break; 
			case 5: displayAtPos();	break;
			case 6: editFirst();			break;
			case 7: editLast(); 			break;
			case 8: editAtPos();			break;
			case 9: delFirst(); 			break;
			case 10: delLast();				break;
			case 11: delAtPos();				break;
			case 12: len=length();
				 	printf("Total No. of node are:-%d",len); 				break;
			case 13: swap(); 					break;
			case 14: sort();					break;
			case 15: delAll();				break;
			case 16: exit(0); break;
			default:printf("\nENTER A VALID NUMBER.\n");
		}
	}
	return 0;
}

void append(){
	NODE *temp=crNode();
	if(ROOT==NULL){
		ROOT=temp;
	}
	else{
	NODE *n=ROOT;
	while(n->right!=NULL){
		n=n->right;
	}
	temp->left=n;
	n->right=temp;
	}
}
void addAtFirst(){
	struct node *temp=crNode();
	if(ROOT==NULL){
		printf("\nList was empty.");
		ROOT=temp;
	}else{
		temp->right=ROOT;
		ROOT->left=temp;
		ROOT=temp;
	}
}
void addAtPos(){
	if(ROOT==NULL)listIsEmpty();
	else{
	printf("\nEnter Position.");
	int pos;
	scanf("%d",&pos);
	if(pos==1){
		addAtFirst();
	}
	else if(pos>length()) lengthExceed();
	else{
	NODE *n,*temp=crNode();
	n=find(pos-1);
	printf("\n\n============================\n\n");
	printf("Node Returnde was === %d",n->data);
	printf("\n\n============================\n\n");
	temp->left=n;
	temp->right=n->right;
	n->right->left=temp;
	n->right=temp;	
	}
}}

void display(){

	NODE *temp=ROOT;
	if(ROOT==NULL){
		printf("\nList is Empty.\n");
	}
	else{
	while(temp!=NULL){
		printf("%d-->",temp->data);
		temp=temp->right;
	}
	}
}
void displayAtPos(){
	printf("\nEnter Pos.");
	int pos;
	if(pos>length()) lengthExceed();
	else{
	scanf("%d",&pos);
	NODE *temp=find(pos);
	printf("\nNode At %d is =>%d",pos,temp->data);
}
}

void editFirst(){
	if(ROOT==NULL)listIsEmpty();
	else{
		printf("\nEnter the data to edit %d",ROOT->data);
		scanf("%d",&ROOT->data);
	}
}
void editLast(){
	if(ROOT==NULL)listIsEmpty();
	else{
		NODE *temp=find(length());
		printf("\nEnter the data to edit %d",temp->data);
		scanf("%d",&temp->data);
	}
}
void editAtPos(){
	if(ROOT==NULL)listIsEmpty();
	else{
		printf("\nEnter the pos to edit");int pos;
		scanf("%d",&pos);
		if(pos>length()) lengthExceed();
		else{	
		NODE *temp=find(pos);
		printf("\nEnter the data to edit %d",temp->data);
		scanf("%d",&temp->data);
	}
	}
}

void delFirst(){
	if(ROOT==NULL)listIsEmpty();
	else ROOT=ROOT->right;
}
void delLast(){
	if(ROOT==NULL)listIsEmpty();
	else{
		NODE *temp=find(length()-1);
		temp->right=NULL;
	}
}
void delAll(){
	ROOT=NULL;
}
void delAtPos(){
}
int length(){
	if(ROOT==NULL){listIsEmpty(); return 0;}
	else{
		int count=0;
		NODE *temp=ROOT;
		while(temp!=NULL) {
			count++;
			temp=temp->right;
		}
		return count;
	}
}
NODE * find(int pos){
	if(ROOT==NULL){
		printf("\nList is empty.");
		return NULL;
	}
	else{
	NODE *temp=ROOT;
	for(int i=0;i<pos-1;i++){
		temp=temp->right;
	}
	return temp;
}} 
NODE * crNode(){
	NODE *n=(NODE *)malloc(sizeof(NODE));
	printf("\nEnter the value");scanf("%d",&n->data);
	n->right=NULL;n->left=NULL;
	return n;
}
void  listIsEmpty(){
	printf("\nList is empty");
}
void lengthExceed(){
	printf("\nLength Exceed.Enter a valid location.");
}
void sort(){
}
void swap(){
}
