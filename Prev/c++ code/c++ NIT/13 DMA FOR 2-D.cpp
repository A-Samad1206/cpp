//DMA FOR 2-D
#include<iostream>
using namespace std;
main()
{    
	int **p,nr,nc;
	cout<<"Enter the no. of rows & column"<<endl;
	cin>>nr>>nc;
	p=new int *[nr];
	for(int r=0;r<nr;r++)
	{
	 	p[r]=new int[nc];
	}	
	cout<<"Enter the element in matrix"<<endl;
	for(int i=0;i<nr;i++)
	{
	 	for(int j=0;j<nc;j++)
	 	{
	 		cin>>p[i][j];
	 	}
	 	cout<<i+1<<"row done"<<endl;       //user friendlienace.
	 	if(i<nr-1)
	 	cout<<"Enter "<<i+2<<" row"<<endl; 
	}
	cout<<"The element in matrix are"<<endl;
	for(int i=0;i<nr;i++)
	{
	 	for(int j=0;j<nc;j++)
	 	{
	 		cout<<p[i][j]<<"\t"<<ends;
	 	}
	 	cout<<endl;
	}
}    
