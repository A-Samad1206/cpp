#include<stdio.h>
main()
{
	int i,j,size,temp;
	printf("Please enter the size:-\n");
	scanf("%d",&size);
	int arr[size];
	printf("Please enter the numbers:-\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",arr[i]);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("The sorted array is:-\n");
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}



