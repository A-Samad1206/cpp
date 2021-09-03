#include<iostream>
using namespace std;
int a=50;
void fun()
{
	class test
	{
		int a;
		public:
			void getd()
			{
				a=100;//x=50;
				cout<<"a="<<a;
				cout<<"a="<<::a;
				//cout<<"x="<<x;
			}
	}t1;
	t1.getd();
}
main()
{
	fun();
}
