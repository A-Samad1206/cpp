#include<iostream>
using namespace std;
class book;
class author
{
	private:
	char aname[50];
	int age;
	friend class book;
//	friend void conct(author,book);
};
class book
{
	author a;
	float price;
	char bname[50];
	public:
	friend void conct(book);
	void putd();
	void getd();
};
void book::getd()
{
	cout<<"Enter the author name\t";
	cin>>a.aname;
	cout<<"Enter the author age"<<"\t";
	cin>>a.age;
	cout<<"Enter the book name"<<"\t";
	cin>>bname;
	cout<<"Enter the bok price"<<"\t";
	cin>>price;
}
void book::putd()
{
	cout<<"The author name:-"<<"\t"<<a.aname<<endl;
	cout<<"The book name:-"<<"\t"<<bname<<endl;
	cout<<"The book price:-"<<"\t"<<price<<endl;
	cout<<"The author age:-"<<"\t"<<a.age;
}
void conct(book b){
	cout<<"The book name:-"<<"\t"<<b.bname<<endl;
	cout<<"The book price:-"<<"\t"<<b.price<<endl;
}
main()
{
	book b;
	b.getd();
//	b.putd();
	conct(b);
}
