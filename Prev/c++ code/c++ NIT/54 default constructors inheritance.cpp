#include<iostream>
#include<conio.h>
using namespace std;
class base
{protected:
		int a;
	
	public:
		base()
		{
			cout<<"base\n";
		}	
		base(int x){
			a=x;
		}

};
class der:public base
{
	protected:
		int b;
	public:
		
		der(int x,int y)//constructor of base class implicitly bind with the derived class constructors.
		{
			base::base(x)
			cout<<"der\n";
		}
	};
class der2:public der,public base   //This orfer is allso impportant   	//base base der der2
						//der base		//base der base der2			
{
	
	public:
		int z;
		der2()
		{
			/*
			* base::base();
			frorm der class
			*base::base();
			* der::der();
			*/
		
			cout<<"der2\n";
		}
};
main()
{
	der2 d;
}
