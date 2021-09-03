/*Write a C++ program to declare struct.Initialise & display contents of members variabls.*/
#include<iostream>
using namespace std;
struct stu{
	int rollNo;
	int marks;
	char name[20];
};
main(){
	struct stu s;
	cout<<"Enter Your Name:-"<<"\t";
	gets(s.name);
	cout<<"Enter Your Roll No.:-"<<"\t";
	cin>>s.rollNo;
	cout<<"Enter Your Grades:-"<<"\t";
	cin>>s.marks;
	cout<<endl<<"DISPLAYING INFORMATION"<<endl<<endl;
	cout<<"Name :-"<<"\t" <<"\t"<<s.name<<endl;
	cout<<"Roll No. :-"<<"\t" <<"\t"<<s.rollNo<<endl;
	cout<<"Grades :-"<<"\t" <<"\t"<<s.marks<<endl;
}







	/*void getInfo(){
			cout<<"Enter your name"<<"\t";
			cin>>name;
			cout<<"Enter your roll no."<<"\t";
			cin>>rollNo;
			cout<<"Enter your marks"<<"\t";
			cin>>marks;
			cout<<endl<<endl;
		}
void putInfo(){
	cout<<"Your name :-"<<"\t"<<name<<endl<<endl;
	cout<<"Your roll no."<<"\t"<<rollNo<<endl<<endl;
	cout<<"Your total marks "<<"\t"<<marks<<"/"<<"500"<<endl<<endl;
}
	*/
