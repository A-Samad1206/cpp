#include<stdio.h>
main()
{
	int number[]={2,1,2,3,4,5,6,7,8,9};
	int *p=number;
	//same as int pointer is p=&a as here it holding.
	                //the address of first element i.e. number[0];
	printf("\n01---------------\n");
	//01
	number[4]=16;
	for(int i=0;i<10;i++)
	{
		printf("%d",p[i]);
	}
	printf("\n02---------------\n");
	//02
	for(int i=0;i<10;i++)
	{
		printf("%d",i[p]);
	}
	printf("\n03---------------\n");
	//03
	for(int i=0;i<10;i++)
	{
		printf("%d",*(p+i));	
	}
	printf("\n04---------------\n");
	//04
	for(int i=0;i<10;i++)
	{
		printf("%d",*(i+p));	
	}	
	printf("\n05---------------\n");
	//05
	for(int i=0;i<10;i++)
	{
		printf("%d",*(p++));
	}
	printf("\n06---------------\n");
	//06
	for(int i=0;i<10;i++)
	{
		printf("%d",number[i]);
	}
	//07
	printf("\n07---------------\n");
	for(int i=0;i<10;i++)
	{
		printf("%d",i[number]);
	}
	printf("\n08---------------\n");
	//08
	for(int i=0;i<10;i++)
	{
		printf("%d",*(number+i));
	}
		printf("\n09---------------\n");
	//09
	for(int i=0;i<10;i++)
	{
		printf("%d",*(i+number));
	}
	//10
	printf("\n10---------------\n");
	for(int i=0;i<10;i++)
 	{
 		printf("%d",*&number[i]);
	}
    //11
    printf("\n11--------------------\n");
    for(int i=0;i<10;i++)
 	{
 		printf("%d",*&i[number]);
	}
	printf("\n12---------------------\n");
    for(int i=0;i<10;i++)
    {
    	printf("%d",*((number+0)+i));//same as *(number+i) simple arithmetic.
	}
}
