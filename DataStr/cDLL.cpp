#include<stdio.h>
#include<stdlib.h>
typedef struct node NODE;
struct node {
  int data;
  NODE *left;
  NODE *right;
};
NODE *START=NULL;
NODE *crNode();
void addAtEnd();
void addAtStart();
// void addAtPos();

void delStart();
void delLast();
// void delAtPos();

void editStart();
void editLast();
// void editPos();

void display();
void disStart();
void disLast();
// void disAtPos();

int length();
void msg();
NODE *nodeAt(int);
int main(){
  for(int i=0;i<5;i++){
    addAtEnd();
  }
  printf("\n\nAfter Five append\n\n");
  display();
  for(int i=0;i<2;i++){
    addAtStart();
  }
  printf("\n\nAfter Add At Start\n\n");
  display();
  
   delStart();
  delLast();
  printf("\n\nAfter Deleting First & Last \n\n");
  display();
  
  editStart();
  editLast();
  printf("\n\nEdit first last\n\n");
  display();
  printf("\n\nFirst And Last\n\n");    
  disStart();
  disLast();
  int len=length();
  printf("Total Length is:- \t%d",len);
  return 0;
}

void display(){
  if(START==NULL) msg();
  else{
  printf("\nList have node:-\t");
  NODE *temp=START;
  do{
    printf("%d==>",temp->data);
    temp=temp->right;
  }
  while(temp!=START);
  }

}
void disStart(){
  printf("\nFirst Node in the List is :- \t%d",START->data);
}
void disLast(){
  printf("\nLast Node in the List is :- \t%d",START->left->data);
}


void editStart(){
  printf("\nEnter the values to replace => %d :-  ",START->data);
  int temp=0;
  scanf("%d",&temp);START->data=temp;
}
void editLast(){
  printf("\nEnter the values to replace => %d  :-   ",START->left->data);
  int temp=0;
  scanf("%d",&temp);
  START->left->data=temp;
}

void delStart(){
  START->left->right=START->right;
  START->right->left=START->left;
  START=START->right;
}
void delLast(){
  
  START->left=START->left->left;
  START->left->right=START;
}
int length(){
  if(START==NULL) return 0;
  else{
  int count=0;
  NODE *temp=START;
  do{
    count++;
    temp=temp->right;
  }
  while(temp!=START);
  
  return count;
  }
}

void addAtStart(){
  if(START==NULL) msg();
  else{
  NODE *newNode=crNode();
  newNode->left=START->left;
  newNode->right=START;
  START->left->right=newNode;
  START->left=newNode;
  START=newNode;
  }
}
void addAtEnd(){
  NODE *temp=crNode();
  if(START==NULL){
    START=temp;
    temp->right=START;
    temp->left=START;
  }else{
    temp->right=START;
    temp->left=START->left;
    START->left->right=temp;
    START->left=temp;
  }
}
NODE *crNode(){
  NODE *temp=(NODE *)malloc(sizeof(NODE));
  printf("\nEnter the data.");
  scanf("%d",&temp->data);
  temp->right=NULL;
  temp->left=NULL;
  return temp;
}
void msg(){
  printf("\nList is empty.");
}