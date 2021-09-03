#include<iostream>
using namespace std;
main(){
	int a,b;
	try{
		cout<<"Enter two values"<<endl;
		cin>>a>>b;	
		if(b==0) throw 0;
		cout<<"Result is   "<<a/b;
	}
	catch(int x){
		cout<<"Division is not possible";
	}
}
