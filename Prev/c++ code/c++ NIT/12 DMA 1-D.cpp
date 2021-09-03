#include<iostream>
using namespace std;
void singleArray();
void mdArray();
main()
{
	singleArray();
	mdArray();
}
void singleArray(){
	int *p,n;
	cout<<"Enter the size"<<"\t";
	cin>>n;
	p=new int[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i]; //cin>>&(p+i); //not work here.
	} 
	cout<<"The elements in 1-D array are"<<endl;
	for(int i=0;i<n;i++)
	{   cout<<"[";
		cout<<*(p+i);
		cout<<"]";
		if(i<n-1){
			cout<<",";
		}
	}
	
}

void mdArray(){
	 
	int **p,nr,nc;
	cout<<endl<<endl<<"CREATE MULTI-DIMENSIONAL ARRAY"<<endl<<endl;
	cout<<"Enter the no. of rows & column :-"<<endl;
	cin>>nr>>nc;
	p=new int *[nr];
	for(int r=0;r<nr;r++)
	{
	 	p[r]=new int[nc];
	}	
	cout<<"Enter the element in matrix :-"<<endl;
	for(int i=0;i<nr;i++)
	{  
	    cout<<"Enter "<<i+1<<" row:-"<<endl;
	 	for(int j=0;j<nc;j++)
	 	{
		 	
	 		cin>>p[i][j];
	 	}
	}
	cout<<endl<<"The element in matrix are :-"<<endl;
	for(int i=0;i<nr;i++)
	{
	 	for(int j=0;j<nc;j++)
	 	{
	 		cout<<p[i][j]<<"\t"<<ends;
	 	}
	 	cout<<endl;
	}
}
