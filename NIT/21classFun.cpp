#include<iostream>
#include<conio.h>
using namespace std;
class stu
{
    private:
	int roll;
	char name[50];
	public:
		void getd();
		void putd();
};
void stu::getd()
{
	cout<<"Enter the roll no.";
	cin>>roll;
	cout<<endl<<"Enter the name"<<endl;
	cin>>name;
}
int main()
{
	stu s;
	s.getd();
	//clrscr();
	s.putd();
	return 0;	
}

void stu::putd()
{
	cout<<"The roll no. is"<<roll;
	cout<<endl<<"Enter the name:\t"<<name<<endl;
}