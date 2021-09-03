#include<iostream>
#include<conio.h>
using namespace std;
class base
{
	public:
		~base()
		{
			cout<<"base\n";
		}
};
class der1:public  base
{
	public:
		~der1()//constructor of base class implicitly bind with the 
				//derived class constructors so base destructor will be destructed two times.
		{
			cout<<"der1\n";
		}
};
class der2:public virtual der1,public base      	//base base der der2
						//der base		//base der base der2			
{
	public:
		~der2()
		{
			cout<<"der2\n";
		}
};
main()
{
	der2 d;
}
