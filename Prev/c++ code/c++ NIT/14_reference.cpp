#include<iostream>
using namespace std;
int main()
{
	int len=10,wid=21,&rlen=len,&rwid=wid;
	cout<<"len and wid\t="<<len<<"\t"<<wid<<endl;
	cout<<"len and wid\t="<<&len<<"\t"<<&wid<<endl;
	cout<<"*len and *&len=\t"<<&len<<"\t"<<&rlen<<endl;
	cout<<"*wid and *&wid=\t"<<&wid<<"\t"<<&rwid<<endl;
	rlen++;
	cout<<"new value of len\t"<<len<<"\t"<<rlen;
	return 0;
	
}
