#include<stdio.h>
main()
 {
 	int arr[10]={0,1,2,3,4,5,6,7,8,9};
 	int *p=arr;
 	int i;
 	//p[i]=value
 	//arr[i]=value.
 	//p++ -->allowed.
 	//arr address.
 	//p address.
 	//01
 	arr[2]=3;//changeable.
 	printf("%d\n",arr[3]);
 	for(i=0;i<10;i++)
 	{
 		printf("%d\n",&arr[i]);
	}
	//02
	printf("02--------------\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",&i[arr]);
	}
	//03
 	printf("03--------------\n");
 	for(i=0;i<10;i++)
 	{
 		printf("%d\n",arr+i);
	}
	//04
	printf("04--------------\n");
	for(i=0;i<10;i++)
 	{
 		printf("%d\n",i+arr);
	}
	//05
	printf("05----------------\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",&p[i]);
	}
	//06
	printf("06----------------\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",&i[p]);
	}
	//07
	printf("07--------------\n");
	for(i=0;i<10;i++)
 	{
 		printf("%d\n",p+i);
	}
	//08
	printf("08--------------\n");
	//03
	for(i=0;i<10;i++)
 	{
 		printf("%d\n",i+p);
	}
	//09
	printf("09--------------\n");
	for(i=0;i<10;i++)
 	{
 		printf("%d\n",p++);
	}
	//10
	printf("10--------------\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",(arr+0)+i);//simple arithmetic.
	}	
}	
