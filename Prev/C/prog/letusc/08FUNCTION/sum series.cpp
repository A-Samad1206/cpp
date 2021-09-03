#include<stdio.h>
void pow(int,int,double *);
void fact(int,double *);
main()
{
	int numb,i;	
	double sin=0;
	printf("Plese enter the number to find the sum: \n");
	scanf("%d",&numb);
	double pr=1;
	double fr=1;
	for(i=1;i<=numb;i++)
	{
	
		pr=1;
		fr=1;
		if(i%2!=0)
		{
			pow(numb,2*i+1,&pr);
			fact(2*i+1,&fr);
			sin=sin+(*&pr/(*&fr));
		}
		if(i%2==0)
		{
			pow(numb,2*i+1,&pr);
			fact(2*i+1,&fr);
			sin=sin-(*&pr/(*&fr));
		}
	}
	printf("\nThe result is %lf",sin);
}
void pow(int base,int expo,double *pr)
{
	*pr=1;
	for(int i=1;i<=expo;i++)
	{
		*pr=*pr*i;
	}
}
void fact(int num,double *fr)
{
	*fr=1;
	for(int i=num;i<=1;i--)
	{
		*fr=*fr*(i-1);
	}
}
