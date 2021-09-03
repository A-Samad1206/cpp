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
	int count=0;
	if(row==col)
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(i==j)
				{
					if(mat[i][j]!=1)
					{
						cout<<"Diagonal value at "<<i+1<<","<<j+1<<" is "<<mat[i][j]<<" it must be one"<<endl;
						count++;
					}	
				}
				else
				{
					if(mat[i][j]!=0)
					{
						cout<<"Value at "<<i+1<<","<<j+1<<" is "<<mat[i][j]<<"it must be zero"<<endl;
						count++;
					}
				}
				}
		}
		if(count!=0)
		{
			cout<<"Matrix is not identity because of "<<count<<" different values"<<endl;
		}
		else
		{
			cout<<"Matrix is identity"<<endl;
		}
	}
	else
	{
		cout<<"The matrix is not square so not identity";
	}
}
