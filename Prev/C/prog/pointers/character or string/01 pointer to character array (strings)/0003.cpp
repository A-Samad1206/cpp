#include<stdio.h>
main()
{
	char str[]={"ABDUS SAMAD"};
	char *ps=str;
	int i;
	printf("01-------------\n");
	for(i=0;*(ps+i)!='\0';i++)
	{
		printf("%s\n",ps+i);//till last
	}
	printf("02-------------\n");
	for(i=0;ps[i]!='\0';i++)
	{
		printf("%s\n",i+ps);//till last
	}
	printf("03-------------\n");
	for(i=0;ps[i]!='\0';i++)
	{
		printf("%s\n",&ps[i]);//till last
	}
	printf("04-------------\n");
	for(i=0;ps[i]!='\0';i++)
	{
		printf("%s\n",&i[ps]);
	}
	printf("05-------------\n");
	for(i=0;ps[i]!='\0';i++)//*ps++ is not bcoz it will coz modification.
	{
		printf("%s\n",ps+i);
	}
	printf("06-------------\n");
	for(i=0;*ps!='\0';i++)//every thing got settled bcoz i was ps!='\0' 
						//assigning which actually making it adress null 
	{
		printf("%s\n",ps++);
	}
	ps=str;//it is necessary bcoz we have modified it in above incrementation.
		   //no neeed of it if we do not execute 6 block.
	printf("07-------------\n");
	for(i=0;ps[i]!='\0';i++)
	{
		printf("%s\n",&str[i]);
	}
	printf("08-------------\n");
	for(i=0;ps[i]!='\0';i++)
	{
		printf("%s\n",&i[str]);
	}
	printf("09-------------\n");
	for(i=0;ps[i]!='\0';i++)
	{
		printf("%s\n",str+i);
	}
	printf("10-------------\n");
	for(i=0;ps[i]!='\0';i++)
	{
		printf("%s\n",i+str);
	}
}
