#include<iostream>
using namespace std;
class stu
{
	char name[50];
	int no[8];
	public:
		void getd();
		void putd();
};
void stu::getd()
{
	cout<<"Enter the name=";
	cin>>name;
	cout<<"Enter the no.=";
	for(int i=0;i<8;i++)
	{
		cin>>no[i];
		cout<<endl;
	}
}
void stu::putd()
{
	cout<<"The name is="<<name;
	cout<<"The no. are=";
	for(int i=0;i<8;i++)
	{
		cout<<no[i]<<endl;
	}
}
main()
{
	stu s[10];
	int s_nu;
	cout<<"Enter the no of student";
	cin>>s_nu;
	for(int i=0;i<8;i++)
	{
		s[i].getd();
	}
	for(int i=0;i<8;i++)
	{
		s[i].putd();
	}
	return 0;
}
