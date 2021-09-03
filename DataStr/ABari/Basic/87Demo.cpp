#include<stdio.h>
#include<malloc.h>
main(){
	
	int x[3][4];
	printf("%u\n",&x[0]);
	printf("%u",&x[1]);
	int *A[3],j=0,i=0;
	for(i=0;i<3;i++){
		A[i]=(int *)malloc(3*sizeof(int));
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter\n");
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	
	
	int **B;
	B=(int **)malloc(sizeof(int *)*3);
	
	for(i=0;i<3;i++){
		B[i]=(int *)malloc(sizeof(int)*3);
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",B[i][j]);
		}
		printf("\n");
	}
	
	
}
