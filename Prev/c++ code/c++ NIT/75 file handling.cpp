#include<fstream>
#include<iostream>
using namespace std;
class student {
	public:
	int id;char name[20];
	
	void getstu(){		
		ofstream file;
		file.open("stuFile.txt");
		char op;
		do{
			cout<<"Enter Id"<<endl;
			cin>>id;
			cout<<"Enter Name"<<endl;
			cin>>name;
			file<<id<<"\t"<<name;
			cout<<"Record Created"<<endl;
			cout<<"If more record to insert[Y/N]"<<endl<<endl;
			cin>>op;
		}
		while(op=='y'||op=='Y');
		file.close();
	}
			
};
main(){
	student s;
	s.getstu();
}
