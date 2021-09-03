#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node *next;
   Node(){
      data = 0;
      next = NULL;
   }
   Node(int x){
      data = x;
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
   void create(int,int);
   void read(int ch); 
   void update(int,int);
   void remove(int ch);   

   Node * nodeAt(int n);

};
  
Node * List::nodeAt(int n){
      int i=1;
      Node *temp=root;
      for(;i<n;i++) temp=temp->next;
      return temp;
}

void List::create(int item,int pos=-1){
   if(length==0) pos=1;
    
   Node *temp, *temp2;
   // cout<<pos<<"length"<<length<<endl;

   if(pos > length+1) cout<<"Enter valid position..."<<endl;
   
   else if(pos==1 || pos==0){ 
      // cout<<"First"<<endl;
      temp=new Node(item);  
      temp->next=root; 
      // cout<<"From Pointer"<<temp->data<<endl;
      root=temp;
      if(length==0) last=temp;
      length++;
   }
   
   else if(pos==-1 || pos==length){
      // cout<<"Second"<<endl;
      temp=new Node(item);
      last->next=temp;
      last=temp; 
      length++;
   }
   
   else if(pos){
      // cout<<"Third"<<endl;
      temp=new Node(item); 
      temp2 = nodeAt(pos);
      temp->next=temp2->next;
      temp2->next=temp; 
      length++;
   }

}

void List::read(int pos=-111){
   cout<<endl;

   Node *temp;
   if(length==0) cout<<"List is empty...\t";
   else if(pos>length) cout<<"Enter valid position";
   else if(pos==1 || pos==0)cout<<"First Node is :- "<<"\t"<<root->data;
   
   else if(pos==-1 ||pos==length)cout<<"Last Node is :- "<<"\t"<<last->data;
   
   else if(pos>0){
      temp=nodeAt(pos);
      cout<<"Node at pos :-["<<pos<<"] => "<<temp->data;
   }
   else {
      temp=root;
      cout<<"List is :- \t";        
      while(temp!=NULL){
         cout<<temp->data<<"\t";
         temp=temp->next;
      }
   }
   
}

void List::update(int item,int pos){
   Node *temp;
   if(length==0) cout<<"List is empty..."<<endl;
   else if(pos>length) cout<<"Enter a valid position..."<<endl;
   else if(pos==0 || pos==1)root->data=item;
   else if(pos==-1 || pos==length)last->data=item;
   else if(pos){
            temp=nodeAt(pos);
            temp->data=item;
   }
}

void List::remove(int pos){
   Node *temp;
   if(length==0) cout<<"List is empty..."<<endl;
   else if(pos>length) cout<<"Enter valid position..."<<endl; 
   else if(pos==1|| pos==0){
      root=root->next;length--;
   }else if(pos==-1 || pos==length){
      temp=nodeAt(length-1);
      last=temp;
      temp->next=NULL;
      length--;
   }else if(pos){
      temp=nodeAt(pos-1); 
      Node *temp2=temp->next;
      temp->next=temp2->next;
      length--;
   }
}   

int main(){
   return 0;
}
