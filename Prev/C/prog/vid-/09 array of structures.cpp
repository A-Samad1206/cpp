#include<stdio.h>
struct tenant
{
	char name[50],adrs[50];
	int age,salary,room_no;
};
main()
{
	int i,j,min;
	struct tenant t[50];
	printf("\t\t\tPlease enter the details of tenant:-\n");
	for(i=0;i<5;i++)
	{
		printf("Details of %d tenant:-",(i+1));
		printf("\n\tName:-       "); 			scanf("%s",t[i].name); //IF IT IS WRIITEN INFRONT OF PRINTF THE CURSOR WILL BE FORWARD TO NEXT LINE.
		//scanf("%s",t[i].name);
		printf("\n\tAddress:-    "); 		scanf("%s",t[i].adrs);
		printf("\n\tAge:-        "); 		scanf("%d",&t[i].age);
		printf("\t\nSalary:-     "); 		scanf("%d",&t[i].salary);
		/*printf("\nRoom number:-"); 		scanf("%d",&t[i].room_no);*/
		printf("\n\n");
	}
	printf("\n\n");
	min=t[0].age;
	j=0;
	for(i=0;i<5;i++)
	{
		if(t[i].age<min)
		{
			min=t[i].age;		
			j=i;
		}
	}
	printf("Tenant of minimum age is:-%d",&t[j].age);
	
	return 0;
}

