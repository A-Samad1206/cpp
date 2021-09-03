#include<iostream>
using namespace std;
class test{
	public:
		test(){
			cout<<"Test constructor"<<endl;
		}
		~test(){
			cout<<"Test destructor"<<endl;
		}
};
int main(){
	try{
		test t;
		cout<<"B4"<<endl;
		throw 10;
		cout<<"After"<<endl;
	}
	catch(...){
		cout<<"Catch";
	}
}
