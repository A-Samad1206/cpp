#include<iostream>
using namespace std;
class A{
	public:
		virtual void show(){ //Have to add virtual keyword to avoid its duplication in its inherited classes.
			cout<<"Hello from class A"<<endl;
		}
};
class B:public A{
	public:
		void show(){
			cout<<"Hello from class B"<<endl;
		}
};
class C:public A{
	public:
		void show(){
			cout<<"Hello from class C"<<endl;
		}
};
class D:public A{
	public:
		void show(){
			cout<<"Hello from class D"<<endl;
		}
};
class E:public A{
	public:
		void show(){
			cout<<"Hello from class E"<<endl;
		}
};
class F:public A{
	public:
		void show(){
			cout<<"Hello from class F"<<endl;
		}
};
main(){
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	A *p[]={&a,&b,&c,&d,&e,&f}; //Create array of refernces of every objects;
	for(int i=0;i<6;i++){
		p[i]->show();
	}	
}
