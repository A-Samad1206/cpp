#include<stdio.h>
main()
{
	int mat[2][3]={6,2,3,4,5,6};//mat=*mat=&mat[0][0].	
	int i,j;
	/*mat is holding the address
	mat=adrres of mat[0][0]
	*mat=bcoz of 2-d array double * have to used.
	mat+1=overlapping the whole 1-D aeeay.
	*(mat+1)=means go to mat[1] initial adress and read it.
	*mat+num;bcoz of continuos memory.**(mat+num) **(MAT+NUM) SIMPLE ARITHMETIC.
	mat[i] holding address. only *mat[i] fo derefrencement.
	*/
	///////////////////////////////////////
	
	printf("01-DR----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("02-DR--------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{ 
			printf("%d\t",*(*(mat+i)+j));
		}
		printf("\n");
	}
	printf("\n03-DR--------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",*(mat[i]+j));//case is different as per strng of M-D.1
		}printf("\n");
	}
	printf("\n04-DR--------\n");
	for(i=0;i<6;i++)
	{
		if(i==3)
		{ 
			printf("\n");
		}
		printf("%d\t",*(*mat+i));
	}
	//dispite the fact it is doing arithmetic only
	//it is intact here to check st-tmnt at line 108
	/*printf("04-DR--------\n");
	for(i=0;i<6;i++)
	{
		if(i==3)
		{ 
			printf("\n");
		}
		printf("%d\t",**mat+i);
	}*/
	printf("\n---------------------ADDDRESS--------------------\n");
	printf("04-ADRS--------\n");
	for(i=0;i<6;i++)
	{
		if(i==3)
		{ 
			printf("\n");	
		}
		printf("%d\t",(*mat+i));
	}
	printf("\n01-AD----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{ 
			printf("%d\t",*(mat+i)+j);
		}
		printf("\n");
	}
	printf("02-AD----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",(mat[i]+j));//case is different as per strng of M-D.1
		}
		printf("\n");
	}
	printf("03-AD-----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			mat[i][j]=i*j;
			printf("%d\t",&mat[i][j]);
		}
		printf("\n");
	}
	printf("\n04-ADRS--PROBLEMS------\n");
	for(i=0;i<6;i++)
	{
		if(i==3)
		{ 
			printf("\n");	
		}
		printf("%d\t",*(*mat+i));
	}
	printf("\n04-ADRS--PROBLEMS------\n");
	for(i=0;i<6;i++)
	{
		if(i==3)
		{ 
			printf("\n");	
		}
		printf("%d\t",(**mat+i));
	}
	
	/*for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{ 
			printf("%d\t",((mat+i)+j));//it is simply doing arithmetic here.
		}
		printf("\n");
	}*/
	//BELOW 3 STATEMENTS HOLDS SAME MEANINGS.
	/*printf("%d",mat);
	printf("\n%d",*mat);
	printf("\n%d",mat+i);
	/*BELOW 2 DO OVERLAPPING.*/
	/*printf("%d",*mat+1);
	printf("%d\n",mat[0]);//it also holding address of.
	//W/O ENGAGING j/column access any vale.
	printf("\n%d",**mat+4);*/
	return 0;
}
 
