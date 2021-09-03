#include<stdio.h>
//#include<stdlib.h>
main()
{
 	int goals;
 	printf("Enter the number\n");
 	scanf("%d",&goals);
 	if(goals<=5)
 		goto sos;
 	else
 	{
 	 	printf("abuut\n");
 	 	exit(1);
	}
	sos:
		printf("To err");
	  
}
