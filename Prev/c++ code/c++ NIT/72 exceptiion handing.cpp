#include<iostream>
using namespace std;
main(){
try{
	cout<<"TRY 1"<<endl;
	try{
		cout<<"TRY 2"<<endl;
		try{
		cout<<"TRY 3"<<endl;
		throw 2;		
		}
		catch(...){
		cout<<"TRY 3 CATCH"<<endl;
		}
		throw 2;		
		}
		catch(...){
		cout<<"TRY 2 CATCH"<<endl;
		}
		throw 2;
}
catch(...){
	cout<<"Catch Outer"<<endl;
}
}
