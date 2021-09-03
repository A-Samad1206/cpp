/*Write a C++ program to use scope resolution operator. 
  Display the various values of the same variables declared at different scope 
  levels.*/
  
#include<iostream>
using namespace std;
class test{
	private:// By default it would be private.
    void pvtFun(){
    	cout<<"Hello from Pvt. member Function"<<endl;
	}
    public:
    	void getData(){
    		cout<<"Hello from Public member function.:-"<<endl<<endl;
    		cout<<"From public invoke Pvt. Member Function"<<endl<<endl;
    		pvtFun();
		}
		protected:
			void putData(){
				cout<<"Hello from Protected Member function.:-"<<endl<<endl;
				
			}
		
};
class der:public test{
	public:
	void getProt(){
		cout<<"Now from Derived class Public Function invoke Base Class Protected Member Function.:-"<<endl;
		putData();
	}
};

main(){
	test t;
	der d;
	t.getData();
	d.getProt();
}
