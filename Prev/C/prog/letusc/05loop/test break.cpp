#include<stdio.h>
main()
{
	int i=1,j=1;
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=200;j++)//if for(;j<=200;j++) it will 
						  //cause the jump of control out
						  // of both loop and will execute 100 times.
		{
			if(j==150)
			{
				break;
			}
			else
			{
				printf("%d\t%d\n",i,j);
			}
		}
	}
}
