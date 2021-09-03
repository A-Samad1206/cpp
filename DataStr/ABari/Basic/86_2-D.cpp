#include<iostream>
using namespace std;
int main(){
	//First Way
	int *A[3];
	A[0]=new int[5];
	A[1]=new int[5];
	A[2]=new int[5];
//	for(int i=0;i<3;i++){
//	for(int j=0;j<5;j++){
//		cout<<"Enter "<<i<<" "<<j<<" ";
//		cin>>A[i][j];
//	}
//	}
	
//	for(int i=0;i<3;i++){
//	for(int j=0;j<5;j++){
//		cout<<A[i][j]<<ends;
//	}
//	cout<<endl;
//	}
	
	
	//Second Way
	int **p;
	p=new int*[3];
	for(int i=0;i<3;i++){
		p[i]=new int[4];
	}
	
	
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<"Enter "<<i<<" "<<j<<" ";
		cin>>p[i][j];
	}
	}
	
	for(int i=0;i<3;i++){
	for(int j=0;j<4;j++){
		cout<<p[i][j]<<ends;
	}
	cout<<endl;
}	return 0;
}
