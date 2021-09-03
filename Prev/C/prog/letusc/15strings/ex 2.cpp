#include<stdio.h>
main()
{
	char s[]="Get organised!Learn C!!";
										/*printf("%s\n",&s[2]);
										printf("%s\n",s);*/
										//printf("%s\n",&s);
	int i=0;
	while(s[i]!='\0')
	{
		printf("%c\n",*(s+i));
		i++;	
	}
	return 0;					
}
