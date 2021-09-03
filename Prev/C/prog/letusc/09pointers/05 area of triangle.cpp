#include<stdio.h>
#include<math.h>
void area(double,double,double,double*);
main()
{
	double sides[3]={0};
	double ar;
	printf("Please enter the three sides of triangle:-\n");
	for(int i=0;i<3;i++)
	{
		scanf("%lf",&sides[i]);
	}
	/*if(sides[0]+sides[1]<sides[2] ||sides[0]+sides[2]<sides[1] || sides[2]+sides[1]<sides[0])
	{ 
		printf("ENTER THE VALID SIDES:-\n");
	}
	else*/
	
		area(sides[0],sides[1],sides[2],&ar);
		printf("THE AREA IS:-%lf",*(&ar));
	
}
void area(double s1,double s2,double s3,double *area)
{
	double s;
	s=(s1+s2+s3)/2;
	double pa;
	pa=s*(s-s1)*(s-s2)*(s-s3);
    *area=sqrt(pa);
}
