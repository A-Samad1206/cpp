#include<iostream>
#include<math.h> 
using namespace std;
main()
{
	int i,j,row,col;
	cout<<"Enter the number of rows and columns of 1st matrix:-"<<endl;
	cin>>row>>col;
	int mat[row][col],sum=0,count=0;
	cout<<"Enter the values"<<endl;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>mat[i][j];
			sum=sum+((mat[i][j])*(mat[i][j]));
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
	float t=sqrt(sum);
		cout<<"The normal of matrix is:-\t"<<t<<endl;
}
