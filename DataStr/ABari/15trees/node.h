// #include<iostream>
// using namespace std;
class Node{   
   public:
   int data;
   Node *rc,*lc;
   Node(){data=0;rc=lc=0;}
   Node(int d){data=d;rc=lc=0;}
   Node(int d,Node *l,Node *r){ data=d; rc=r;lc=l; }
};