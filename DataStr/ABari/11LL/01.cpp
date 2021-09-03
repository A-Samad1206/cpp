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
   void create(int ch);
   void read(int ch); 
   void update(int ch);
   void remove(int ch);   

   Node * nodeAt(int n);

   void Display(Node *n,int);
   int lenByRec();

   // void count(Node *n,int *i){
   //    cout<<"Count "<<*i<<" "<<n->data<<endl;
   //    for(;n!=NULL;*i++) count(n->next,i);
   // }
   int count(Node *n); 
   void cc(){
      int c=count(root);
      cout<<"Length is "<<c;
   }
   int sum(Node *n);
   void sc(){
      int su=sum(root);
      cout<<"sum is "<<su;
   }
   void add();
   void max();
   int maxR(Node *);
   void maxRC(){
      // cout<<"Max By RC"<<endl;
   int ma=maxR(root); cout<<"Max is :- "<<ma<<endl;}
   void search();
   Node * searchR(Node *,int);
   void sRc(){
      int key;
      cout<<"Key = "<<endl;cin>>key;
      Node*temp=searchR(root,key);
      if(temp) cout<<"Key is founded"<<endl;
      else cout<<"Not Founded";   
   }
   void sorted();
   void remDup();
   void reverse();
   void revByLink();
   void revByRec(Node *,Node*);
   void revByRecCall(){
      Node *p=root,*q=NULL;
      revByRec(q,p);
   } 
   void concat(List *);
   void merge(List*);
   int loop();
};

int List::loop(){
   Node *p=root,*q=root;
   do{
      cout<<p->i<<" B4 "<<q->i<<endl;
      p=p->next;
      q=q->next;
      q = q!=NULL ? q->next : NULL;
      cout<<p->i<<" Af "<<q->i<<endl;
      cout<<"End";
   }
   while(p && q && p!=q);
   return p==q ?1 :0;
}

void List::merge(List*p){
   Node *first=root, *second=p->root,*last=NULL,*third=NULL;
   while(first && second) {
      if(first->data<second->data){
         third=last=first;
         first=first->next;
         last->next=NULL;
      }else{
         third=last=second;
         second=second->next;
         last->next=NULL;
      }
      while(first && second){
         if(first->data<second->data){
            last->next=first;
            last=first;
            first=first->next;
            last->next=NULL;
         }
         else{
            last->next=second;
            last=second;
            second=second->next;
            last->next=NULL;
         }
      }
      if(first) last->next=first;
      else last->next=second;
   }
}

void List::concat(List *l){
   last->next=l->root;

   // List n(root,length,last);
   // n.last->next=l->root;
   // return &n;
}

void List::revByRec(Node *q,Node*p){
   if(p){
      revByRec(p,p->next);
      p->next=q;
   }else{
      root=q;
   }
}

void List::revByLink(){
   Node *p=root,*q=NULL,*r=NULL;
   while(p){
      
      r=q;
      q=p;
      p=p->next;
      q->next=r;
   }
   root=q;
}

void List::reverse(){
   int i=0,*arr=new int[length];
   Node *p=root;
   
   for(;p;i++){
      arr[i]=p->data;
      p=p->next;
   }
   p=root; 
   while(p){
      p->data=arr[--i];
      p=p->next;
   }

}

void List::remDup(){
   cout<<endl;
   Node *p=root,*q=root->next;
   while(q){
      if(p->data==q->data){  
         p->next=q->next;
         delete q;
         q=p->next;
         length--;
      }else{ 
         p=p->next;
         q=q->next;
      }
   }
}

void List::sorted(){
   int flag=1,x=root->data;
   Node *temp=root->next;
   while(temp){
      if(temp->data<x){
         flag=0;
         break;
      }
      x=temp->data;
      temp=temp->next;
   }
   if(flag) cout<<"Yes Sorted";
   else cout<<"Not Sorted";
}
 
Node * List::searchR(Node *n,int key){
   if(n==NULL) return NULL;
   if(key==n->data) return n;
   return searchR(n->next,key);
}

void List::search(){
      int key;
      cout<<"Key to search"<<"\t";
      cin>>key;
      Node *p=root,*q=NULL;
      while(p){
         if(key==p->data){
            // Move To Head
            // q->next=p->next;
            // p->next=root;
            // root=p;
            // Transposition of data
            // p->data=root->data;   
            // root->data=key;
               
            cout<<"Found"<<endl;
            break;
         }
         q=p;
         p=p->next;
      }
}
int g=1;
int List::maxR(Node *n){
   int x=0;
   // cout<<g++<<" MaxR"<<endl;
   if(!n){
      cout<<"XX "<<x<<endl;
       return 0;}
   x=maxR(n->next);
   cout<<x<<" x "<<n->data<<endl;
   if(x>n->data){
      cout<<"First"<<endl;
      return x;
   }
   else {
      cout<<"Second"<<endl;
      return n->data;
   }
   // return x > n->data ? x : n->data;
}

void List::max(){
      int item=0;
      Node *temp=root;
      while(temp){ 
         if(temp->data>item)
         item=temp->data;
         temp=temp->next;
      }
      cout<<"Max item is :- "<<item;
}

void List::add(){
      int s=0;
      Node *temp=root;
      while(temp!=NULL){
         s+=temp->data;
         temp=temp->next;
      }
      cout<<"Total sum is "<<s;
}

int List::sum(Node *n){
   if(!n) return 0; 
   return n->data+sum(n->next);
}

int List::count(Node *n){ 
   if(n==NULL) return 0;
   // addition is done at returning time.
   return count(n->next)+1;
   // addition is done at returning time.
   // return 1+count(n->next);
}

int List::lenByRec(){
      Node *temp=root;int l=0;
      for(;temp!=NULL;l++) temp=temp->next;
      return l;
}

void List::Display(Node *n,int reverse=0){ 
      if(n!=NULL){
         if(reverse) Display(n->next,1);
         cout<<n->data<<","<<n->i<<"\t";
         if(!reverse) Display(n->next);
      }
}

Node * List::nodeAt(int n){
      int i=1;
      Node *temp=root;
      while(i<n){ 
         temp=temp->next;
         i++;
      }
      return temp;
}

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
      if(length==0) last=temp;
      temp->i=length++;
      break;
      case 2:
      temp=new Node;
      cout<<"Enter Data :- "<<"\t";cin>>temp->data;
      // temp2=nodeAt(length);
      temp2=last;

      temp2->next=temp;
      last=temp; 
      temp->i=length++;
      // if(length==6)
      //    temp->next=nodeAt(3);

      break;
      case 3 :
      temp=new Node;int pos;
      cout<<"Add After Pos  :- "<<"\t";cin>>pos;
      cout<<"Enter Data :- "<<"\t";cin>>temp->data;
      temp2= pos==length ? last:nodeAt(pos);
      if(pos==0){
         temp->next=temp2;
         root=temp;
      } else{
      temp->next=temp2->next;
      temp2->next=temp;}
      if(pos==length) last=temp;
      length++;
      break; 
      default:;
   }
}

void List::read(int ch=0){
   cout<<endl;
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
         cout<<"By other Last Node is :- "<<"\t"<<last->data;
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
         Display(root,0);
         // while(temp!=NULL){
         //    cout<<temp->data<<"\t";
         //    temp=temp->next;
         // }
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
         cout<<"Enter Data"<<"\t";cin>>last->data;
         break;
      case 3 :
         int pos;
         cout<<length<<" Enter Pos"<<"\t";cin>>pos;
         if(pos>length){ cout<<"Enter valid position"<<endl;  }
         else{
         cout<<"Enter Data"<<"\t";cin>>n;
         if(pos==length) last->data=n;
         else { 
            temp=nodeAt(pos);
            temp->data=n;
            }
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
         last=temp;
         temp->next=NULL;
         length--;
         break;
      case 3 :
         int pos;
         cout<<length<<" Enter Pos"<<"\t";cin>>pos;
         if(pos>length){ cout<<"Enter valid position"<<endl;  }
         else{
         temp=nodeAt(pos-1);
         if(pos==length){
            last=temp;
            temp->next=NULL;  
         } else {
            Node *temp2=nodeAt(pos);
            temp->next=temp2->next;
            }
         }
         length--;
         break;
      case 4 :
         last=root=NULL;    
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
   l.create(2); 
   l.read(4);
   cout<<endl<<endl;
    l.maxRC();
   // int x=l.loop();
   // cout<<"Is loop present "<<x<<endl;
   return 0;
}
