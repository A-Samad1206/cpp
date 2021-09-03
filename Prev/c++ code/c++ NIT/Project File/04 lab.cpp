/*Given that an Employee class contain following members:-name,id,basic salary,DA,IT,Net Salary & print data members.*/
#include <iostream>
using namespace std;
class emp{
 	int empId;
 	char name[20];
 	float emp_basicSal;
 	float emp_da;
 	float emp_it;
 	float emp_netSal;
 	public:
 		void getInfo();
 		void cal();
 		void putInfo();
 	};
 	void emp::getInfo(){
 		cout<<"Enter the employee ID :-"<<"\t";
 		cin>>empId;
 		cout<<"Enter the employee name :-"<<"\t";
 		cin>>name;
 		cout<<"Enter the basic employee salary :-"<<"\t";
 		cin>>emp_basicSal;
	}
	 void emp::cal(){
	 	emp_da=0.52*emp_basicSal;
	 	emp_it=0.30*(emp_basicSal+emp_da);
	 	emp_netSal=(emp_da+emp_basicSal)-emp_it;
	}
	 void emp::putInfo(){
	 	cout<<endl<<endl;
	 	cout<<"\tEMPLOYEE DATAILS"<<endl<<endl;
	 	cout<<"Employee ID :-"<<"\t"<<empId<<endl;
 		cout<<"Employee name :-"<<"\t"<<name<<endl;
 		cout<<"Employee Basic Salary :-"<<"\t"<<emp_basicSal<<endl;
 		cout<<"Employee Dearness Allowance :-"<<"\t"<<emp_da<<endl;
 		cout<<"Employee Income Tax :-"<<"\t"<<emp_it<<endl;
 		cout<<"Employee Net Salary :-"<<"\t"<<emp_netSal<<endl;
	}
main(){
	emp e;
	e.getInfo();
	e.cal();
	e.putInfo();
}
