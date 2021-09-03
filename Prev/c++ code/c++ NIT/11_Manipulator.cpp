#include<iostream>
#include<iomanip>
using namespace std;

main(){	cout<<"Binary  "<<setbase(2)<<65<<endl;
	cout<<"Octal  "<<setbase(8)<<65<<endl;
	cout<<"Headecimal  "<<setbase(8)<<65<<endl;
	cout<<"Decimal  "<<setbase(10)<<65<<endl;
	cout<<setfill('*');
	cout<<setw(20)<<1<<endl;
	cout<<endl;
	cout<<setw(20)<<10<<endl;
	cout<<endl;
	cout<<setw(20)<<100<<endl;
	cout<<endl;
	cout<<setw(20)<<1000<<endl;
	cout<<endl;
	cout<<setw(20)<<"RAMAVENKAT"<<endl;
	cout<<endl;
	cout<<endl;
	
	// setiosflags() example
	
	cout<<setw(20)<<setiosflags(ios::left)<<"RAMAVENKAT"<<endl;
	cout<<setiosflags(ios::showpos)<<25<<endl;
	cout<<setiosflags(ios::showpoint)<<(22/7)<<endl;
	cout<<setiosflags(ios::scientific)<<333.45<<endl;
	cout<<setiosflags(ios::fixed)<<333.45<<endl;
		
}
