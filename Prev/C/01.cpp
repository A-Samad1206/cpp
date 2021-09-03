#include<stdio.h>

void pointer(); 
void multi();
void pointerToArray();
int main(){
		// pointer(); 
	multi();
	//	pointerToArray();
	char first[]="Abdus";
	char last[]="Samad";
	char *myPtr[]={first,last};
//	printf("%c",**myPtr);
for(int i=0;i<2;i++){
	// printf("%u\n",myPtr+i);
}	
	return 0;
}
void pointerToArray(){
		int s[4][2]={
			{ 1234, 56 },
			{ 1212, 33 },
			{ 1434, 80 },
			{ 1312, 78 }
 		};
int i,j,*pint;
// int **p[4]=s;
for (i=0;i<=3;i++){
	pint=s[i];
	printf ("\n") ;
	for(j=0;j<=1;j++)
	printf ( "%d ", s[i][j] ) ;
	}

	
	

}
void multi(){
	int s[4][2]={
			{ 1234, 56 },
			{ 1212, 33 },
			{ 1434, 80 },
			{ 1312, 78 }
 			};
// 			printf("%u\n",s);
printf("%u\n",s+0);
printf("%u\n",s+1);
printf("%u\n",s+2);
printf("%u\n",s+3);
printf("dddddddddddddddddddddddddd");
printf("%u\n",*(s+0));
printf("%u\n",*(s+1));
printf("%u\n",*(s+2));
printf("%u\n",*(s+3));
printf("dddddddddddddddddddddddddd");
printf("%u\n",s[0]);
printf("%u\n",s[1]);
printf("%u\n",s[2]);
printf("%u\n",s[3]);
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			printf("&s[i][j] %u ",&s[i][j]);
//			printf("%u ",s[i]+j);
		}
		printf("\n");
	}
	printf("=============Second========\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			printf("s[i]+j %u ",s[i]+j);
		}
		printf("\n");
	}
	printf("=============Third========\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			printf("(s+i)+j %u ",(s+i)+j);//=== s+1+2=(s+1)+2
			 
		}
		printf("\n");
	}
	printf("=============Four========\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			printf("*(s+i)+j %u ",*(s+i)+j);
		}
		printf("\n");
	}
	printf("=============Fifth========\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			printf("*(s+i) %u ",*(s+i));//=== s+i
			
		}
		printf("\n");
	}		
}
void pointer(){
		int arr[5]={10,20,30,40,50};
	int *p=arr;
	for(int i=0;i<5;i++){

	if(i!=0){ 
		printf("==============\n");
	}
	printf("Memory  of %d have value %d==%d==%d and address is %u===%u\n",i,arr[i],*&arr[i],*(arr+i),&arr[i],arr+i);
	printf("Memory  of %d have value %d==%d==%d and address is %u===%u\n",i,p[i],*&p[i],*(p+i),&p[i],p+i);
		}
	printf("\nNew values is:-%d\n\n",arr[1]);
	*&arr[1]=51000;
	printf("New values is:-%d",arr[1]);

} 