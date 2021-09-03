#include<iostream>
using namespace std;
class test{
	private:                                            // By default it would be private.
            void pvtFun(){
    	cout<<"Hello from Pvt. member Function"<<endl;
	}
           public:
    	void getData(){
    		cout<<"Hello from Public member function.:-"<<endl<<endl;
    		cout<<"From public invoking Pvt. Member Function"<<endl<<endl;
    		pvtFun();
	}
	protected:
	void putData(){
		cout<<"Hello from Protected Member function.:-"<<endl<<endl;
	} 
};
class der:public test{   // Inherit der class from test
	public:
	void getProt(){
cout<<"Now from Derived class Public Function invoking Base Class             Protected Member Function.:-"<<endl;
		putData();
	}
};

main(){
	test t;
	der d;
	t.getData();
	d.getProt();
}

