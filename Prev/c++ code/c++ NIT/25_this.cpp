/*TO DISTINGUISH THE LOCAL VARIABLE  & DATA MEMBER OF THE SAME NAME
*/
// this->a retrieve the data member value
// a retrieve the local member value
#include<iostream>
#include<conio.h>
using namespace std;

class test
{
	int a=10,b=50;
	public:
		void geta(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void puta()
		{
			int a=58,b=98;
			cout<<"Object address "<<this<<endl;
			cout<<"Address of a="<<&(this->a)<<endl;
			cout<<"Address of b="<<&(this->b)<<endl;
		}
};
main()
{
	test t1;
	t1.geta(15,25);
	t1.puta();
	return 0;
}
