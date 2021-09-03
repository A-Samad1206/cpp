#include<iostream>
using namespace std;
class base{
	protected:
	int x;
	public:
		void getValue1(){
			cout<<"Hello from base class"<<endl<<endl;
			cout<<"Enter value of x"<<"\t";
			cin>>x; 
		}
};
class der1:public base{
	protected:
	int y;
	public:
		void getValue2(){
			cout<<endl<<"Hello from der1 class derived from base class"<<endl<<endl;
			cout<<"Enter value of y\t";
			cin>>y; 
		}
};
class der2:public der1{
	protected:
	int z;
	public:
		void getValue3(){
			cout<<endl<<"Hello from der2 class derived from der1 class"<<endl<<endl;
			cout<<"Enter value of z\t";
			cin>>z; 
		}
};
class der3:public der2{
	protected:
	int a;
	public:
		void getValue4(){
			cout<<endl<<"Hello from der3 class derived from der2 class"<<endl<<endl;
			cout<<"Enter value of a\t";
			cin>>a; 
		}
		void pro(){
			cout<<endl<<"Product of value "<<x<<" * "<<y<<" * "<<z<<" * "<<a<<" = "<<" "<<a<<(x*y*z*a);
		}
};
main(){
	der3 d;
	d.getValue1();
	d.getValue2();
	d.getValue3();
	d.getValue4();
	d.pro();
}


