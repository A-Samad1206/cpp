//it is not an array,it is also not constant ointer that why p++ allowed.
#include<stdio.h>
main()
{
	char *p="ABDUS SAMAD";//p++(adaptable to change),p+i,i+p.//p holding address of A and *p is A or 65.
	printf("%u\n\n",p);
	for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%u\n",(p+i));
    }
    printf("\n\n");
    for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%c\t%u\n",*(i+p),*(i+p));
    }
    
	printf("01----------\n");
	for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%c",*(p+i));
    }
    printf("\n02----------\n");
	for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%s\n",p+i);
	}
	printf("03----------\n");
	for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%c",*(i+p));
    }
	printf("\n04----------\n");	
	for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%s\n",i+p);
	}
	
	printf("05----------\n");
	for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%s\n",p++);//this will incrementised the whole pointer.
	}
	printf("following things work if we commentise the above all\n");
	/*printf("06----------\n");
	for(int i=0;*(p+i)!='\0';i++)
	{
		printf("%c\n",*(p++));//got modified.
	}*/
 	//printf("%c\n",p[i]);bcoz its not array.
}

