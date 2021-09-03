#include<stdio.h>
main()
{
	char s[]="Churchgate:no church no gate";
	char t[50];
	char *ss,*tt;
	ss=s;
	tt=t;
	int i=0;
	while(s[i]!='\0')
	{
		*(t+i)=*(s+i);
		i++;
	}
	*(t+i)='\0';//at end we got garbage value without it.
	printf("%s\n",t);
	/*while(*ss!='\0')
		*tt++=*ss++;
	printf("s\n",t);*/
	return 0;
}
