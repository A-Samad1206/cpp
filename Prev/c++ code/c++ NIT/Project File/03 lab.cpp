#include<iostream>
using namespace std;
class si{
	double principle;
	double rate;
	double time;
	public:
		si(double p=2.0,double r=2.0,double t=2.0){  
			cout<<"Constructor called."<<endl;
			principle=p;
			rate=r;
			time=t;
		}
		double siFormula(){
			return (principle*rate*time)/100;
		}
};
main(){
	si s1(10000,8,5);
	si s2(12000,10,8);
	si *ptrSi1=&s1,*ptrSi2=&s2;
	cout<<"Simple Interest of 1st Query:-\t"<<ptrSi1->siFormula()<<endl;
	cout<<"Simple Interest of 2nd Query:-\t"<<ptrSi2->siFormula()<<endl;
}
