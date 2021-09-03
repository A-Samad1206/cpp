#include<stdio.h>
void removrep(int [],int,int);
main()
{
	int i,position=0,j,size;
	printf("Please enter the size:-\n");
	scanf("%d",size);
	printf("\nPlease enter the arrays values:-\n");
	int arr[size];
	for(i=0;i<size;i++)	
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				position=j;
				removrep(arr,position,size);
				size--;
			}
		}
	}
	
	printf("The array after process is:-\n");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


void removrep(int arr[],int position,int size)
{ 
	int i;
	for(i=0;i<size;i++)
	{
		if(i<position)
		   arr[i]=arr[i];
		if(i>=position)
		   arr[i]=arr[i+1];	
	}
	
}
