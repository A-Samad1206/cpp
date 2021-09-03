#include<stdio.h>
struct accdet
{
	char name[50];
	int accnum;
	float blnc;
};
void defaulter(struct accdet,int);
int main()
{
	int j,i;
	float depo,wid;
	struct accdet ad[5];
	printf("Please enter the details of accountees:-\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the name:-");				scanf("%s",ad[i].name);
		printf("Enter the account number:-");	scanf("%d",ad[i].accnum);
		printf("Enter the balance:-");			scanf("%f",ad[i].blnc);				
	}
defaulter(ad,i);
int x=0;
printf("Enter 1 if you want deposit");
scanf("%d",x);
char nam[50]={0};
	if(x=1)
	{
		printf("Please enter your name");
		gets(nam);
		while(nam!=ad[i].name)
		{
			j=i;
			i++;
		}
		printf("Enter amount to deposit:\n");
		scanf("%f",depo);
		ad[j].blnc+=depo;
		printf("%s,your total balance is %d",ad[j].name,ad[j].blnc);	
	}
	else if(x=0)
	{
		printf("Please enter your name");
		gets(nam);
		while(nam!=add[i].name)
		{
			j=i;
			i++;
		}
		if(ad[j].blnc<100)
		{
			printf("Sorry,your net balance is below 100.");
		}
		else
		{
			printf("Enter the amount to be withdrawn:\n");
			scan("%f",wid);
			if(wid>ad[j].blnc)
			{
				printf("Enter valid amount\n");
			}
			else
			{
				ad[j].blnc=ad[j].blnc-wid;	
			}
			printf("%s,your net amount is %f",ad[j].name,ad[j].blnc);
		}
	}
	return 0;

	
}
void defaulter(struct accdet,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(d[i].accnum<100)
		{
			printf("%s,account number %d is defaulter",d[i].name,d[i].accnum;
		}
	}
}
