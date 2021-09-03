#include<stdio.h>
main()
{
	int size;
	printf("Please enter the size:-\n");
	scanf("%d",&size);
	int arr[size]={0};
	printf("PLZ ENTER NUMBERS:-\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	return 0;
}
