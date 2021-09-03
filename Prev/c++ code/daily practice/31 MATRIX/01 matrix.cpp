#include<iostream>
using namespace std;
main()
{
	int i,j,row,col,row1,col1;
	cout<<"Value of both matrix's rows and column must be identical"<<endl;
	cout<<"Enter the number of rows and columns of 1st matrix:-"<<endl;
	cin>>row>>col;
	cout<<"Enter the number of rows and columns of 1st matrix:-"<<endl;
	cin>>row1>>col1;
	int mat[row][col];
	int mat1[row1][col1];int mats[row][col];
	if(row!=row1 && col!=col1)
	{
		cout<<"Matrix must be identical"<<endl;
		cout<<"Sorry,you entered unidentical matrix"<<endl;
	}
	else
	{
		cout<<"Enter the values"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>mat[i][j];
		}	
	}
	cout<<"Enter the values of 2nd matrix"<<endl;
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			cin>>mat1[i][j];
		}	
	}
	cout<<"The values are"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mats[i][j]=mat[i][j]+mat1[i][j];
			cout<<mats[i][j]<<"\t"<<ends;
		}	
		cout<<endl;
	}
	cout<<"The transpose of add is"<<endl;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			cout<<mats[j][i]<<"\t"<<ends;
		}	
		cout<<endl;
	}
	if(col1!=row2)
	{
		cout<<"Sorry,multiplication is impossible in this case"<<endl;
	}
	else
	{
		for(i=0;i<col1;i++)
		{
			for(j=0;j<)
		}
	}
	}
}
