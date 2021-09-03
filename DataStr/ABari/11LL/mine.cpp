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
}; 

class List{
   Node *root;
   int length;
   public:
   List(){ 
      root=NULL;
      length=0;
   }
   void create(int ch);
   void read(int ch); 
   void update(int ch);
   void remove(int ch);   

   Node * nodeAt(int n){
      int i=1;
      Node *temp=root;
      while(i<n){ 
         temp=temp->next;
         i++;
      }
      return temp;
   } 
  

 
}; 

void List::create(int ch=0){
   if(length==0) ch=1;   
   if(!ch){
      cout<<endl<<"Create At :- ";
      cout<<endl<<"1)First"<<"\t\t"<<"2.)Last"<<endl<<"3.)At Pos"<<"\t"<<endl;
      cin>>ch;
   }
   Node *temp, *temp2;
   switch(ch){
      case 1:
      temp=new Node;
      cout<<"Enter Data :- "<<"\t";cin>>temp->data;
      temp->next=root;
      root=temp;
      length++;
      break;
      case 2:
      temp=new Node;
      cout<<"Enter Data :- "<<"\t";cin>>temp->data;
      temp2=nodeAt(length);
      temp2->next=temp;
      length++;
      break;
      case 3:
      temp=new Node;int pos;
      cout<<"Enter Pos :- "<<"\t";cin>>pos;
      cout<<"Enter Data :- "<<"\t";cin>>temp->data;
      temp2=nodeAt(pos-1); 
      if(pos==1) {
      temp->next=temp2;
      root=temp;
      }else{
      temp->next=temp2->next;
      temp2->next=temp;
      }
      length++;
      break; 
      default:;
   }
}

void List::read(int ch=0){
   if(length==0) ch=5;   
   if(!ch){
      cout<<endl<<"Display ";
      cout<<endl<<"1)First"<<"\t\t"<<"2.)Last"<<endl<<"3.)At Pos"<<"\t"<<"4.)Entire"<<endl;
      cin>>ch;
   }
   Node *temp;
   switch(ch){
      case 1 :
         cout<<"First Node is :- "<<"\t"<<root->data;break;
      case 2 : 
         temp=nodeAt(length);
         cout<<"By other Last Node is :- "<<"\t"<<temp->data;
         break;
      case 3 :
         int n;
         cout<<"Enter Pos"<<"\t";cin>>n;
         if(n>length){ cout<<"Enter valid position"<<endl; read();}
         else{
         temp=nodeAt(n);
         cout<<"Node at pos :-["<<ch<<"] => "<<temp->data;
         }
         break;
      case 4 :
         temp=root;
         cout<<"List is :- "<<endl;
         while(temp!=NULL){
            cout<<temp->data<<"\t";
            temp=temp->next;
         }
         break;
      case 5 :
      cout<<"List is empty"<<endl;
      break;
      default :
         cout<<"Enter Valid";
   }

}

void List::update(int ch=0){
   if(length==0) ch=5;
   if(length==1) ch=1;
   if(!ch){
      cout<<endl<<"Update at "<<endl;
      cout<<"1)First"<<"\t\t"<<"2.)Last"<<endl<<"3.)At Pos"<<"\t"<<"4.)Entire"<<endl;
      cin>>ch;
   }
   Node *temp;
   int n,i=1;
   switch(ch){
      case 1 :
         cout<<"Enter Data"<<"\t";cin>>n;
         root->data=n;
         break;
      case 2 :
         temp=nodeAt(length);
         cout<<"Enter Data"<<"\t";cin>>n;
         temp->data=n;
         break;
      case 3 :
         int pos;

         cout<<length<<" Enter Pos"<<"\t";cin>>pos;
         if(pos>length){ cout<<"Enter valid position"<<endl;  }
         else{
         temp=nodeAt(pos);
         cout<<"Enter Data"<<"\t";cin>>n;
         temp->data=n;
         }
         break;
      case 4 :
        
         temp=root;
         while(temp!=NULL){
            cout<<i<<" =>"<<temp->data<<"\t";
            cout<<"Enter Data"<<"\t";cin>>n;
            temp->data=n;
            i++;
            temp=temp->next;
         }
         break;
      case 5 :
         cout<<"List is empty..."<<endl;
         break;
      default :
         cout<<"Enter Valid";
   }
}

void List::remove(int ch=0){
   if(length==0) ch=5;
   if(length==1) ch=1;

   if(!ch){
      cout<<endl<<"Delete at "<<endl;
      cout<<"1)First"<<"\t\t"<<"2.)Last"<<endl<<"3.)At Pos"<<"\t"<<"4.)Entire"<<endl;
      cin>>ch;
   }
   Node *temp;
   int n,i=1;
   switch(ch){
      case 1 :         
         root=root->next;
         length--;
         break;
      case 2 :
         temp=nodeAt(length-1);
         temp->next=NULL;
         length--;
         break;
      case 3 :
         int pos;
         cout<<length<<" Enter Pos"<<"\t";cin>>pos;
         if(pos>length){ cout<<"Enter valid position"<<endl;  }
         else{
         temp=nodeAt(pos-1);
         Node *temp2=nodeAt(pos);
         temp->next=temp2->next;
         }
         length--;
         break;
      case 4 :
         root=NULL;    
         length=0;
         break;
      case 5 :
      cout<<"List is Empty"<<endl;
      break;
      default :
         cout<<"Enter Valid";
   }
}   

int main(){ 
   List l;
   l.create();
   l.create(2);
   l.create(2);
   l.create(2);
   l.create(2); 
   return 0;
}
