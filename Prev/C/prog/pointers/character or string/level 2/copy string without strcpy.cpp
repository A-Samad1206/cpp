//It had stopped to run
#include<stdio.h>
#include<string.h>
main()
{
	int i;
	char address1[50]; char address2[50]; char address3[50];
	strcpy(address1,"UTTARAKHAND");
	strcpy(address2,address1);
	printf("string in 1:-\t%s",address1);
    printf("string in 2:-\t%s",address2);
		
	
	for(i=0;i<=50;i++)
	{
		printf("Add strings in 3rd:-");
		scanf("%[^\n]s",address3[i]);
		address1[i]=address3[i];
		//address2[i]=address3[i];
		//printf("Add strings in 3rd:-");
		//scanf("%[^\n]s",address3[i]);
		//strcpy(address2,address3[i]);
	}
	return 0;
}
