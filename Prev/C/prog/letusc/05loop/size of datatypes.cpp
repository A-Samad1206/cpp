#include<stdio.h>
long long int range(int);
main()
{
	int x;
	long long int res=0;
	printf("INT:-   %d\n",sizeof(int));
    x=sizeof(int);
	res=range(x);
	printf("RANGE OF INT %llu\n",res);
	printf("---------------------\n");
	printf("CHAR:-   %d\n",sizeof(char));
	x=sizeof(char);
	res=range(x);
	printf("RANGE OF CHAR %llu\n",res);
	printf("---------------------\n");
	printf("FLOAT:-   %d\n",sizeof(float));
	x=sizeof(float);
	res=range(x);
	printf("RANGE OF FLOAT %llu\n",res);
	printf("---------------------\n");
	printf("DOUBLE:-   %d\n",sizeof(double));
	x=sizeof(double);
	res=range(x);
	printf("RANGE OF DOUBLE %llu\n",res);
	printf("---------------------\n");
	printf("SHORT:-   %d\n",sizeof(short));
	x=sizeof(short);
	res=range(x);
	printf("RANGE OF SHORT %llu\n",res);
	printf("---------------------\n");
	printf("SHORT INT:-   %d\n",sizeof(short int));
	x=sizeof(short int);
	res=range(x);
	printf("RANGE OF SHORT INT %llu\n",res);
	printf("---------------------\n");
	printf("LONG INT:-	%d\n",sizeof(long int));
	x=sizeof(long int);
	res=range(x);
	printf("RANGE OF LONG INT %llu\n",res);
	printf("---------------------\n");
	printf("LONG LONG  INT:-	%d\n",sizeof(long long int));
	x=sizeof(long long int);
	res=range(x);
	printf("RANGE OF LONG LONG INT %llu\n",res);
	printf("---------------------\n");
	printf("LONG DOUBLE:-	%d\n",sizeof(long double));
	x=sizeof(long double);
	res=range(x);
	printf("RANGE OF LONG DOUBLE %llu\n",res);
	printf("---------------------\n");
	//printf("LONG INT:-	%d\n",sizeof(short double));
	//printf("LONG INT:-	%d\n",sizeof(long float));
	//printf("SHORT INT:-   %d\n",sizeof(short float));	
	printf("\n\n--------MODIFIED-------------\n");
	printf("INT:-				%d\n",sizeof(unsigned int));
	printf("CHAR:-				%d\n",sizeof(unsigned char));
	printf("SHORT:-				%d\n",sizeof(unsigned short));
	printf("SHORT INT:- 		%d\n",sizeof(unsigned short int));
	printf("LONG INT:-  		%d\n",sizeof(unsigned long int));
	printf("LONG LONG  INT:-	%d\n",sizeof(unsigned long long int));
	//printf("LONG DOUBLE:-		%d\n",sizeof(unsigned long double));	
	//printf("FLOAT:-				%d\n",sizeof(unsigned float));
	//printf("DOUBLE:-			%d\n",sizeof(unsigned double));*/
}
long long int range(int x)
{	
	int y;
	y=8*x;
	long long int range=1;
	for(int i=1;i<=y;i++)
	{
		range=range*2;
	}
	return range-1;
}
