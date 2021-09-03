#include<stdio.h>
main()
{
	
	int i=1,j=1;
	while(i<=100)
	{
		while(j<=200)
		{
			if(j==150)
			{
				break;//it is causing jumping of control out of both loop. 
			}
			else
			{
				printf("%d\t%d\n",i,j);
			}		
		j++;
		}
	i++;
	}
	return 0;
}
