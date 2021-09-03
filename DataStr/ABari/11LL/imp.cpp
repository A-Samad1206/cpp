#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node *next;
   int i;
   Node(){
      data = 0;
      next = NULL;
   }
}; 

class List{
   public:
   Node *root,*last;
   int length;
   
   List(){ 
      root=NULL;
      length=0;
   }
   List(Node * root,int length,Node *last){ 
      this->root=root;
      this->length=length;
      this->last=last;
   }    
   int count(Node *n);
   int sum(Node *n);
   int maxR(Node *n);
   void List::Display(Node *,int);
   Node * List::searchR(Node*,int);

 };
 
int List::count(Node *n){ 
   if(n==NULL) return 0;
   // addition is done at returning time.
   return count(n->next)+1;
   // addition is done at returning time.
   // return 1+count(n->next);
}

int List::sum(Node *n){
   if(!n) return 0; 
   return n->data+sum(n->next);
}

int List::maxR(Node *n){
   int x=0;
   cout<<"MaxR"<<endl;
   if(!n) return 0;
   x=maxR(n->next);

   // return x > n->data ? x : n->data;

   if(x>n->data){
      cout<<x<<"First"<<n->data<<endl;
      return x;
   }
   else {
      cout<<x<<"Second"<<n->data<<endl;
      return n->data;
   }
}

void List::Display(Node *n,int reverse=0){ 
      if(n!=NULL){
         if(reverse) Display(n->next,1);
         cout<<n->data<<","<<n->i<<"\t";
         if(!reverse) Display(n->next);
      }
}

Node * List::searchR(Node *n,int key){
   
   if(n==NULL) return NULL;
   if(key==n->data) {
      // Node *q;
      // q->next=n->next;
      // n->next=root;
      // root=n;
      // q=n;
      return n;
      }
   return searchR(n->next,key);
}
int main(){  
   return 0;
}
