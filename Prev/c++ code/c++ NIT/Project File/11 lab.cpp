#include<iostream>
using namespace std;
class base{
	public:
		virtual void print(){
			cout<<"Hello from print() of base class use virtual keyword"<<endl;
		}
		void show(){
			cout<<"Hello from show() of base class don't use virtual keyword"<<endl;
		}
};
class der:public base{
	public:
		void print(){
			cout<<"Hello from print() function of derived class."<<endl;
		}
		void show(){
			cout<<"Hello from show() function of derived class."<<endl;
		}
};

main(){
	base *p;
	der d;
	p=&d;
	p->show();
	p->print();
}
