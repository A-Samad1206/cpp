#include<iostream>
using namespace std;
template <class t>
class test
{
	t a,b;
	public:
		void getd()
		{
			cin>>a>>b;
		}
		void sum();
};


template <class t>
t test<t>::sum()
{
	return a+b;
}
main()
{
	test <int> ti;
	test <float> tf;
	cout<<"Enter the inttegers"<<endl;
	ti.getd();
	cout<<"The sum is"<<ti.sum()<<endl;
	cout<<"Enter the floats"<<endl;
	tf.getd();
	cout<<"The sum is"<<tf.sum()<<endl;
	return 0;	
}
