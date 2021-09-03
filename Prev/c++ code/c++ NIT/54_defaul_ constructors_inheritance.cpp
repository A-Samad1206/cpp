#include<iostream>
#include<conio.h>
using namespace std;
class base
{
protected:
		int a;
	
	public:
		base()
		{
			cout<<"base\n";
		}	
		// base(int x){
		// 	cout<<"Base X";
		// 	a=x;
		// }

};
class der1:public base
{
	protected:
		int b;
	public:
		der1(){
			cout<<"Der1 \n";
		}
		// der(int x,int y)//constructor of base class implicitly bind with the derived class constructors.
		// {
		// 	// base::base(x);
		// 	b=y;
		// 	cout<<"Der Y";
		// }
	};
	 
class der2:public der1,public base   //This orfer is allso impportant   	//base base der der2
						//der base		//base der base der2			
{
	
	public:
		int c;
		der2()
		{
			
//			base::base(x);
//			der::der(y);
//			c=z;
			cout<<"der2\n";
		}
//		void puti(){
//			cout<<"a:-"<<a<<endl;
//			cout<<"b:-"<<c<<endl;
//			cout<<"d:-"<<d<<endl;
//		}
};
main()
{
	der2 d;
}
