#include<stdio.h>
main()
{
	int i,j;
    int arr[]={26,28,39,68,69,65,3526,65};
    for(i=0;i<8;i++)
    {
    	if(arr[i]==3526)
    	j=i;	
	}
	printf("The i is %d",j);
    int newARR[7];
    for(i=0;i<7;i++)
    {
    	if(i<j)
    	{
    		newARR[i]=arr[i];
		}
		if(i>=j)
		{
			newARR[i]=arr[i+1];	
		}    
	}
	printf("The new array is:-\n");
	for(i=0;i<7;i++)
	{
		printf("\n%d",newARR[i]);
	}


	return 0;
}
