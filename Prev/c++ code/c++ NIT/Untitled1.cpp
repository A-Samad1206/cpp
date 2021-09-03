/*Write a program to illustrate concept of I/O operations in C++.*/
#include<iostream>
#include <iomanip>
using namespace std;
main(){
	char ch;

    cout<<"Press any key: ";
    ch = cin.get();

    cout << "You have pressed: ";
    cout.put(ch);
    
    char ch[20];

    cout<<"What is your favourite website: ";
    cin.getline(ch, 20);

    cout <<endl<< "visit: www.";
    cout.write(ch, 17);
    cout<<".com"<<endl;

	/*
	 int variable_int;
    float variable_float;
    char variable_char;

    cout<<"Enter any integer number: ";
    cin>>variable_int;
    cout<<"Enter any floating point number: ";
    cin>>variable_float;
    cout<<"Enter any character: ";
    cin>>variable_char;

    cout <<endl<< "Integer = "<<variable_int<<endl;
    cout <<endl<< "Floating Point = "<<variable_float<<endl;
    cout <<endl<< "Character = "<<variable_char<<endl;
    
    
    */
    int x=10;

    cout<<setw(10);
    cout<<x<<endl;

    cout<<setw(10)<<setfill('*')<<x<<endl;

	
	
}
