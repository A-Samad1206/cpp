#include<iostream>
using namespace std;
main()
{
	int i,j,row1,col1,row2,col2;
	cout<<"Value of both matrix's rows and column must be identical"<<endl;
	cout<<"Enter the number of rows and columns of 1st matrix:-"<<endl;
	cin>>row1>>col1;
	cout<<"Enter the number of rows and columns of 1st matrix:-"<<endl;
	cin>>row2>>col2;
	int mat1[row1][col1];
	int mat2[row2][col2];
	if(col1!=row2)
	{
		cout<<"NOT POSSIBLE WITH THE GIVEN ROWS AND COLUMN"<<endl;
	}
	else
	{
		cout<<"Enter the values"<<endl;
		for(i=0;i<row1;i++)
		{
		for(j=0;j<col1;j++)
			{
				cin>>mat1[i][j];
			}	
		}
		cout<<"Enter the values of 2nd matrix"<<endl;
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				cin>>mat2[i][j];
			}	
		}
		int sum;int matm[row1][col2];
		for(i=0;i<row1;i++)
		{
			for(int k=0;k<col2;k++)
			{
				for(j=0;j<col1;j++)
				{
					sum+=mat1[i][j]*mat2[j][k];
				}
				matm[i][k]=sum;
				sum=0;
			}
		}
		cout<<endl;
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%d\t",*matm[i][j]);
			}
			cout<<endl;
		}
	}
}
