//MY OWN DATA STRUCTURE
#include<iostream>
#include<malloc.h>
using namespace std;
void sumall(int *,int);
int sum,count,temp;
main()
{
	int *a,arrsize,arrnum;
	printf("Enter the number of array u want to add:\n");
	scanf("%d",&arrnum);
	for(int i=1;i<=arrnum;i++)
	{
		printf("Enter the size of %d array:\n",i);
		scanf("%d",&arrsize);
		a=(int *)malloc(arrsize*4);
		if(a==NULL)
		printf("Memory not allocated");
		else
		sumall(a,arrsize);
		free(a);
	}   
	printf("\n\nTotal sum is:-\t %d",sum);
}       
void sumall(int *p,int arrsize)
{
     printf("Enter the values\n");       
	for(int i=0;i<arrsize;i++)
	{   
		scanf("%d",p+i);
	}
	for(int i=0;i<arrsize;i++)
	{   
		sum=sum+*(p+i);
		
	}
	count++;
	cout<<endl<<"Sum of "<<count<<"  array is"<<sum-temp<<endl;
	temp=sum;
}
