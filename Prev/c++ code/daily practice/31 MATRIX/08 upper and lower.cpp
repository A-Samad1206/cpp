#include<iostream>
using namespace std;
main()
{
	int i,j,row,col,lower=0,upper=0,k=0;
	cout<<"Enter the no. of rows and columns"<<endl;
	cin>>row>>col;
	int mat[row][col];
	cout<<"Enter the matrix"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>mat[i][j];
			if(j>i)
			{
				if(mat[i][j]==0)
				{
					upper++;
				}
			}
			else if(j<i)
			{
				if(mat[i][j]==0)
				{
					lower++;
					cout<<k++;
				}
			}
		}
	}
	cout<<"The matrix are"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<mat[i][j]<<" "<<ends;
		}
		cout<<endl;
	}
	if(lower==0)
	{
		cout<<"The matrix is lower";
	}
	else if(upper==0)
	{
		cout<<"The matrix is upper";
	}
	
}
