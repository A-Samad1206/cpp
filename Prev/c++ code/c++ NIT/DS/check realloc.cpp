#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	int * ptr,*ptr2,num;
	cout<<"Enter number\t";
	cin>>num;
	ptr=(int *)malloc(num*sizeof(int));
	for(int i=0;i<num;i++){
		ptr[i]=i+550;
	}
	cout<<"Number are\t";
	for(int i=0;i<num;i++){
		cout<<ptr[i]<<"  ";
	}
	int ext;
	cout<<"EXT\t";
	cin>>ext;
	int loop=ext+num;
	int *ptr1=(int *)realloc(ptr,ext*sizeof(int));//ptr=ptr1;
	for(int i=0;i<loop;i++){
		ptr1[num+i]=100+i;
		}
		ptr=ptr1;
//		ptr2=ptr;
		for(int i=0;i<loop;i++){
		cout<<ptr[i]<<"  ";
	}
}
