#include<stdio.h>
struct students
{
	char name[50]; 
	int roll; 
	int age;
};
main()
{
	struct students s[2];
	struct students *p=s;
	struct students *temp=p;
	printf("%u\n",temp);
	p=p+1;
	printf("%u\n",p);
	printf("ENETER FIRST NAME");
	scanf("%d",p->age);
	printf("ENETER FIRST NAME\t%d",p->age);
}
/*
	int i;char name[50];
	printf("SIZE OF CHAR 0:-%u\n",sizeof(name[50]));
	printf("SIZE OF NAME 0:-%u\n",sizeof(s[0].name));
	printf("SIZE OF ROLL 0:-%u\n",sizeof(s[0].roll));
	printf("SIZE OF AGE 0:-%u\n",sizeof(s[0].age));

	printf("SIZE OF NAME 1:-%u\n",sizeof(s[1].name));
	printf("SIZE OF ROLL 1:-%u\n",sizeof(s[1].roll));
	printf("SIZE OF AGE 1:-%u\n",sizeof(s[1].age));
	
	printf("\n---------------\n");
	printf("& OF NAME 0:-%u\n",&(s[0].name));
	printf("& OF ROLL 0:-%u\n",&(s[0].roll));
	printf("& OF AGE 0:-%u\n",&s[0].age);
	
	printf("& OF NAME 1:-%u\n",&(s[1].name));
	printf("& OF ROLL 1:-%u\n",&(s[1].roll));
	printf("& OF AGE 1:-%u\n",&(s[1].age));
	
	printf("\n---------------\n");
	printf("& of s[0]:-%u",&s[0]);
	printf("\n& of s[1]:-%u",&s[1]);
	printf("\nSIZE-%u",sizeof(students));
	printf("\n---------------\n");
	printf("\nPlease enter the details of students:-\n");
	for(i=0;i<2;i++)
	{
		if(i>0)
		{
			printf("\n---------------\n");
		}
		fflush(stdin);//b/w int & string.
		printf("Enter the name of student:-");			gets(s[i].name);
		fflush(stdin);//b/w strings & integer
		printf("Enter the roll number of student:-");	scanf("%d",&s[i].roll);
		printf("Enter the age of student:-");			scanf("%d",&s[i].age);	
	}
	printf("\nDetails of students are:-");
	for(i=0;i<2;i++)
	{
		if(i>0)
		{
			printf("\n---------------\n");
		}
		printf("\nName of student:-%s",s[i].name);
		printf("\nRoll number of student:-%d",s[i].roll);
		printf("\nAge of student:-%d",s[i].age);
	}
	return 0;
}
*/
