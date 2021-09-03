#include<iostream>
using namespace std;
class c1
{
	public:
		void fun1()
		{
			cout<<"Function 1 is created"<<endl;
		}
};
class c2:public virtual c1
{
	public:
	void fun2()
	{
		cout<<"Function 2 is created"<<endl;
		}	
};
class c3:public virtual c1
{
	public:
	void fun3()
	{
		cout<<"Function 3 is created"<<endl;
		}	
};
class c4:public c2,public c3
{
	public:
	void fun4()
	{
		cout<<"Function 4 is created"<<endl;
		}	
};
main()
{
	c4 c;
    c.fun1();//if virtual is not used request for member 'fun1' is ambiguous
	c.fun2();
	c.fun3();
	c.fun4();
}
