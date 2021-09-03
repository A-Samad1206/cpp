#include<iostream>
using namespace std;
main(){
	/* DMA-2 for S-D array */
	
	int n;
	int *p;
	cout<<"ENTER THE NO.";
	cin>>n;
	p=new int[n];
	cout<<"Enter The Value"<<endl;
	for(int i=0;i<n;i++){
		cout<<i<<" .) Value";
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		cout<<p[i]<<endl;
		
	}
	
	
	
	/* DMA-2 for M-D array */
	
	
	int **q,nr,nc,r,c;
	cout<<"Enter Number Of Rows";
	cin>>nr;
	cout<<"Enter Number Of Cols";
	cin>>nc;
	q=new int *[nr];
	for(int i=0;i<nr;i++){
		q[i]= new int[nc]; 	
	}
	cout<<"Enter Values";
	for(int i=0;i<nr;i++)
		{
			for(int j=0;j<nc;j++)
			{
			cin>>q[i][j];
			}
		}
	cout<<"Values are"<<endl;
	for(int i=0;i<nr;i++)
		{
			for(int j=0;j<nc;j++)
			{
			cout<<q[i][j]<<" ";
			}
			cout<<endl;
		}
	
}
