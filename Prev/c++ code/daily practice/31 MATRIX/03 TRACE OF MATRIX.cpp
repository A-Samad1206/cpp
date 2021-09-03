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
	int sum
}
