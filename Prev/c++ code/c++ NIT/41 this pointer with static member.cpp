#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	public:
 	static int a,b;
 	static void geta(int x,int y)
 		{
 			a=x;
 			b=y;
		}
};
int test::a;
int test::b;
main()
{
	test::geta(10,20);
	cout<<"a="<<test::a;
	cout<<"\nb="<<test::b;
	
	return 0;
 }
