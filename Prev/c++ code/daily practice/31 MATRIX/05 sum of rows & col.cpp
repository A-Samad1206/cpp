#include<iostream>
using  namespace std;
main()
{
	int row,col;
	cout<<"Enter the value of row and coulmns"<<endl;
	cin>>row>>col;
	int mat[row][col];
	cout<<"Enter the value in matrix"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<"The values in matrix are"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<mat[i][j]<<ends;
		}
		cout<<endl;
	}
	int matr[row][1]={0},matc[col][1]={0};
	int sum=0;
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				matr[i][0]=matr[i][0]+mat[i][j];
			}
		}
		for(int i=0;i<col;i++)
		{
			for(int j=0;j<row;j++)
			{
				matc[i][0]=matc[i][0]+mat[j][i];
			}
		}
		for(int i=0;i<row;i++)
		{
				cout<<matr[i][0]<<endl;
		}
		for(int i=0;i<col;i++)
		{
			cout<<matc[i][0]<<endl;
		}
		cout<<endl;	
	}
