#include <iostream>
using namespace std;
class stu{
	char name[30];
	int rollNo;
	int grade;
	public:
		void getInfo();				/* Member Function To Get Student Data  */
		void putInfo();			    /* Member Function To Display Student Data  */
};
/* Define Member Function*/
void stu::getInfo()
		{
			cout<<"Enter your name :-"<<"\t";
			cin>>name;
			cout<<"Enter your roll no. :-"<<"\t";
			cin>>rollNo;
			cout<<"Enter your total marks out of 500 :-"<<"\t";
			cin>>grade;
			cout<<endl<<endl;
		}
void stu::putInfo(){
	cout<<"Your name :-"<<"\t"<<name<<endl<<endl;
	cout<<"Your roll no."<<"\t"<<rollNo<<endl<<endl;
	cout<<"Your total marks "<<"\t"<<grade<<"/"<<"500"<<endl<<endl;
}
main(){
	stu st[3];
	for(int i=0;i<3;i++)
	{	
		cout<<"\t\tSubmit Details of "<<(i+1)<<" student"<<endl;              
		cout<<"===================================================================================================="<<endl;			
		st[i].getInfo();	
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\t\tDetails of "<<(i+1)<<" student"<<endl<<endl;
		cout<<"===================================================================================================="<<endl;
		st[i].putInfo();
	}
}
