/*Given that an Employee class contain following members:-name,id,basic salary,DA,IT,Net Salary & print data members.*/
#include <iostream>
using namespace std;
class emp{
 	int empId;
 	char name[20];
 	float emp_basicSal;
 	float emp_da;
 	float emp_grossSal;
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
 		cout<<endl<<endl;
	}
	 void emp::cal(){
	 	emp_da=0.52*emp_basicSal;
	 	emp_grossSal=emp_basicSal+emp_da;
	 	emp_it=0.30*(emp_grossSal);
	 	emp_netSal=(emp_grossSal)-emp_it;
	}
	 void emp::putInfo(){
	 	cout<<endl<<endl;
	 	cout<<"\tEMPLOYEE DATAILS"<<endl<<endl;
	 	cout<<"Employee ID :-"<<"\t"<<empId<<endl;
 		cout<<"Employee name :-"<<"\t"<<name<<endl;
 		cout<<"Employee Basic Salary :-"<<"\t"<<emp_basicSal<<endl;
 		cout<<"Employee Dearness Allowance :-"<<"\t"<<emp_da<<endl;
 		cout<<"Employee Gross Salary :-"<<"\t"<<emp_grossSal<<endl;
 		cout<<"Employee Income Tax :-"<<"\t"<<emp_it<<endl;
 		cout<<"Employee Net Salary :-"<<"\t"<<emp_netSal<<endl;
	}
main(){
	int n;
	cout<<"Enter no. of employee whose details to be insert"<<endl;cin>>n;
	emp e[n];
	for(int i=0;i<n;i++){
		cout<<"\tEnter "<<i+1<<" employee details."<<endl;
		cout<<"***********************************************"<<endl;
		e[i].getInfo();
		e[i].cal();
	}
	for(int i=0;i<n;i++){
		cout<<"Detail of "<<i+1<<" employee."<<endl;
		cout<<"***********************************************"<<endl;
		e[i].putInfo();
	}
}
