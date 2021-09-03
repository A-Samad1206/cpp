/*
pure virtual function is declared in class but not defined.
*/
#include<iostream>
using namespace std;
class shape
{
	protected:
		int d1,d2;
		virtual float area()=0;
	public:
		void getd()
		{
			cout<<"Enter the dimensions:-\n";
			cin>>d1>>d2;
		}
		//virtual float area()=0; can be put in public or protected.
};
class rect:public shape
{
	public:
		float area()
		{
			return d1*d2;
		}
};
class tri:public shape
{
	public:
		float area()
		{
			return 0.5*d1*d2;
		}
};
main()
{
	tri t;
	t.getd();
	cout<<"Area of triangle is:-\t"<<t.area()<<endl;
	rect r;
	r.getd();
	cout<<"\nArea of rectangle is:-\t"<<r.area();}
