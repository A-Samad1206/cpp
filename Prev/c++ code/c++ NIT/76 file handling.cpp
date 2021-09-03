#include<fstream>
#include<iostream>
using namespace std;
class student {
	int id;string name;
	public:
		void putstu(){
			cout<<id<<"\t"<<name<<endl;
		}
};
main(){
	ifstream file;
	file.open("stuFile.txt");
	student s;
	file.read((char *)&s,sizeof(s));
	while(!file.eof()){
		s.putstu();
		file.read((char *)&s,sizeof(s));
	
	}
	file.close();
}
