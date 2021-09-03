//to print %s it NOT  need dereferencing contrar to 2-d array of characters.
//bcoz array holds address of every strings
//evident from 01 and 02. 
//name+i=&name[i].
//to retrive charcters *name[i].
//NO METHODS TO RETRIEVE CHARACTER.
#include<stdio.h>
main()
{
	char *name[]={"ABDUS SAMAD","AHAD","TALHA"};
	//printf("01-------------\n");
	printf("\n01----concept---------\n");
	for(int i=0;i<3;i++)
	{
		printf("\n%u",*(i+name));//it is address of name[i].
	}
	printf("\n-------------\n");
	for(int i=0;i<3;i++)
	{
		printf("\n%u",name[i]);//AS NAME[I] IS HOLDING ONLY ADDRESS OF STRINGS.
	}
	printf("\n02-------------\n");
	for(int i=0;i<3;i++)
	{
		printf("%s\t%s\n",name[i],i[name]);
	}
	printf("\n03-----CHARACTER RETRIEVE--------\n");
	for(int i=0;i<3;i++)
	{
		FOR(J=0;J<)
		printf("%c\t%c\n",*(*(name+i)+3)/***(name+i)+3*/,**(i+name));//**(name+i)+3A=65+3=D
	}
	printf("\n04-------------\n");
	for(int i=0;i<3;i++)
	{
		printf("%c\t%c\n",*name[i],*i[name]);
	}
	/*printf("05-------------\n");
	for(int i=0;i<3;i++)
	{
		printf("\n%s",*name++);IT IS CONSTANT BCOZ OF ARRAY.
	}*/
    for(int i=0;i<3;i++)
    {
    	printf("\n%lu",sizeof(name[i]));//it means it holds only initial address.
	}
	for(int i=0;i<3;i++)
    {
    	printf("\n%lu",sizeof(*name[i]));//it means it IT SHOWING A,A,T.
	}
}
