#include<stdio.h>
main()
{
	char s[]="No two viruses work similiarly";
	int i=0;
	while(s[i]!='\0')
	{
		printf("%c %c\n",s[i],*(s+i));
		
		i++;
	} 
	for(i=0;s[i]!='\0';i++)
	{
		printf("%c %c\n",i[s],*(i+s));
	}
}

