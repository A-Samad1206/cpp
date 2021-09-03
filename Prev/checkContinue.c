#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=2;i++)
	{
		//j=1;
		for(j=1;j<=2;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				printf("%d\t%d\n",i,j);
			}
		}
	}
	
}
