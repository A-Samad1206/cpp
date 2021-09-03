#include<iostream> 
using namespace std;
main()
{
	int i,j,row,col;
	cout<<"Enter the number of rows and columns of 1st matrix:-"<<endl;
	cin>>row>>col;
	int mat[row][col],count=0;
	cout<<"Enter the values"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==0)
			{
				count++;
			}
		}	
	}
	cout<<"The values are"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<mat[i][j]<<" "<<ends;
		}	
		cout<<endl;
	}
	if(count>(row*col)/2)
	{
		cout<<"Total number of zeroes are:-"<<count<<endl;
		cout<<"Total non-zeroes numbers are:-"<<(row*col)-count<<endl;
		cout<<"As zeroes elements are more than non-zeroes elements."<<endl;
		cout<<"Hence,this matrix is sparse";  	
	}
	else
	cout<<"No sparse";	
}
