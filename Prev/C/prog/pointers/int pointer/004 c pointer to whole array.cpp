//pointer to an whole array is same as multi-dimensional array
#include<stdio.h>
main()
{
	int arr[]={3,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	//not work like in char a[]="geeek"
	int *p=arr;
	int (*ptr)[20]=&arr;
	//Despite the fact that we did not declare
	//but it will keeps giving us the values.
	// on derfrncng it wil;l give garbage valuE.
	//UNDERSTAND THE BEHAVIOUR.
	printf("01------------\n");
	for(int i=0;i<20;i++)
	{
		printf("%d\t%d\n",(ptr+i),(p++));
	}									   
	printf("\n\n");//here ptr is acting like M D.
	//SAMPLE.
	printf("------SAMPLE------------\n");
	for(int i=0;i<20;i++)
	{
		printf("%d\t%d\n",(*ptr),&arr[0]);
	}
	printf("02------SAMPLE------------\n");
	for(int i=0;i<20;i++)
	{
		printf("%d\n",(*ptr+i));//*ptr=&arr[0],on incrementing the address jump to next location. 
	}
	printf("\n03--------------\n\n");
	for(int i=0;i<20;i++)
	{
		printf("%d\n",ptr[i]);//array holding address of whole 1-D array.
	}						//each incrementation will give adrees of overlappping
							//but *ptr[i] garbage value.
							//*&ptr[i]=ptr[i];
	printf("\n04------------\n");
	for(int i=0;i<20;i++)
	{
		printf("%d\n",*(*ptr+i));//ways of drfrncng.
		                       //it is not behaving purely like multi array.
	}
}

