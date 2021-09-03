#include<iostream>
using namespace std;
template <class t>
void swap(t x,t y)
{
	t temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y;
}
main()
{
	swap(10,15);
}
