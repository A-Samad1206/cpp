#include<stdio.h>
struct student 
{ 
	int roll_num,age;
	char name[50];
};
main()
{
	struct student s; //*p=&s                                           //={0};
	
	struct student *p=&s;
	printf("Name:-			"); gets(p->name);
	printf("\nAge:-			"); scanf("%d",&p->age);
	printf("\nRoll no.:-		"); scanf("%d",&p->roll_num);
	
	printf("\n\noutput");
	printf("\nName:-		     %s",p->name);
	printf("\nAge:-			 	 %d",p->age);
	printf("\nRoll no.:-		 %d",p->roll_num);
	
	
	printf("\nvalue of p",*p);//unsuccesful attempt
	return 0;
}
