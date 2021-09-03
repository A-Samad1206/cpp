#include<iostream>
using namespace std;
class c1{
	public:
		void fun1(){
			cout<<"C1"<<endl;
		}
};
class c2:public  c1{
	public:
		void fun2(){
			cout<<"C2"<<endl;
		}
};
class c3:public  c1{
	public:
		void fun3(){
			cout<<"C3"<<endl;
		}
};
class c4:public  c2,public  c3{
	public:
		void fun4(){
			cout<<"C4"<<endl;
		}
};
class c5:public  c3{
	public:
		void fun5(){
			cout<<"C5"<<endl;
		}
};
class c6:public c5,public c4{
	public:
		void fun6(){
			cout<<"C6"<<endl;
		}
};
main(){
	c4 obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
	// obj.fun5();
	// obj.fun6();
}
