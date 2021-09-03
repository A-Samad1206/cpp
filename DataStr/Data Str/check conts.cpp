#include<iostream>
using namespace std;
class  test{
	
	
	public: 
	test(){
		get();
	}void get(){
		cout<<"Get parent";
	}
};
main()
{
	test t;
}
