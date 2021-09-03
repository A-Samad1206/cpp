#include<stdio.h>
main()
{
	int i=0;
	for(;i++<=10;)
	{
		printf("%d\n",i);
	}
	printf("\n\n");
	i=0;
	for(;++i<=10;)
	{
		printf("%d\n",i);
	}
	return 0;
}
