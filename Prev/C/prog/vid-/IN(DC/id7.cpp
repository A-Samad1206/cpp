 #include<stdio.h>
main()
{
	int i=0,arr[10]={0},x=0;
	for(;i<=10;i++)
	{
		x++;//or ++x;
		arr[i]=++x;//arr[i]=++i;typically will pose error. 
	}
	for(int j=0;j<10;j++)
	{
		printf("%d\n",arr[j]);
	}
	return 0;
}
