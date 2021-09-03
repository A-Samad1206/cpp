/* RULES IN PARAMETERISED CONSTRUCTOR
BASE CLASS SHOULD HAVE CONTAIN A DEFAULT CONSTRUCTOR
2.)BASE CPC SHOULED BE INVOKED INSIDE DERIVED CPC
3.)BCMC SHOULD BE STATEMENT IN DERIVED CPMC
4.)NO OTHER BCMC CALLED IN DCPC,ONLY ONE BCPC IS CALLED IN DCPM
*/

#include<iostream>
using namespace std;
class base
{
	protected:
	int a,b,c;
	public:
		base(){}
		base(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
};
class der:public base
{
	int d,e,f;
	public:
		der(){
		}
		der(int x,int y,int z,int d,int e,int f)
		{
			base::base(x,y,z);
			this->d=d;
			this->e=e;
			this->f=f;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
			cout<<"d="<<d<<endl;
			cout<<"e="<<e<<endl;
			cout<<"f="<<f<<endl;
			}
};
main()
{
	der d(10,20,30,40,50,60);
	d.show();
}
