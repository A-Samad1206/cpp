#include<stdio.h>
// #define SIZE 5

#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
struct Array * merge(struct Array* arr1,struct Array* arr2);
void reArrange(struct Array* arr);
void insertSort(struct Array* arr,int item);
int checkSortedAsc(struct Array);
int isFull(struct Array arr,bool print);
void swap(int* a,int* b);

struct Array * unionSet(struct Array* arr1,struct Array* arr2);
struct Array * intersection(struct Array * arrA,struct Array * arrB);
struct Array * difference(struct Array*,struct Array*);
void setMembership(struct Array*,struct Array*);

void display(struct Array arr); 
struct Array{
    int Arr[10];
    int size;
    int length;// Indicate No. of element.
};

int main(){
    struct Array a={{2,6,10,11,15,25},10,6};
    struct Array b={{3,6,7,11,15,20},10,6};
    struct Array *f=difference(&a,&b);
    display(*f);

}

struct Array * difference(struct Array * arrA,struct Array * arrB){
    struct Array * arrD=(struct Array *)malloc(sizeof(struct Array));
    int i=0,j=0,k=0;
    while(i<arrA->length && j<arrB->length){
        // printf("Outer Loop\n");

        // printf("arrA->Arr[i] = %d\tarrB->Arr[j]= %d\n",arrA->Arr[i] ,arrB->Arr[j]);
        if(arrA->Arr[i] < arrB->Arr[j]){
            // printf("Inner loop\n");
            arrD->Arr[k++]=arrA->Arr[i++];
        }else if(arrA->Arr[i]>arrB->Arr[j]){
            // printf("Inner Second loop\n");
            j++;
        }
        else if(arrA->Arr[i]==arrB->Arr[j]){
            // printf("Inner Third loop\n");
            i++;j++;
        }
    }
    for(;i<arrA->length;i++){
        arrD->Arr[k] = arrA->Arr[i];
        k++;
    }
    arrD->length=k;
    arrD->size=10;

    return arrD;
}

struct Array * intersection(struct Array * arrA,struct Array * arrB){
    struct Array * arrI=(struct Array*)malloc(sizeof(struct Array));
    int i=0,j=0,k=0;

    while( i<arrA->length && j<arrB->length ){
        if(arrA->Arr[i]<arrB->Arr[j]) i++;
        
        else if(arrA->Arr[i]>arrB->Arr[j]) j++;
        
        else if(arrA->Arr[i]==arrB->Arr[j])
        {
            arrI->Arr[k]=arrA->Arr[i];
             i++;
             j++;
             k++;
        }
    }
 
    arrI->length=k;
    arrI->size=10;

    return arrI;
}

 
struct Array * unionSet(struct Array* arr1,struct Array* arr2){
    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    
    while(i<arr1->length && j<arr2->length ){
            // printf("Outside Values are  %d\t%d\n", i,j);
        if(arr1->Arr[i] < arr2->Arr[j]){
            // printf("First\n");
            arr3->Arr[k++] = arr1->Arr[i++];
        }else if(arr1->Arr[i] > arr2->Arr[j]){
            // printf("Second\n");
            arr3->Arr[k++] = arr2->Arr[j++];
        }else if(arr1->Arr[i] == arr2->Arr[j]){
            // printf("Values are  %d\t%d\n", i,j);
            arr3->Arr[k++] = arr1->Arr[i++];
            j++;
        }
    }
    
    for(;i<arr1->length;i++){
        arr3->Arr[k] = arr1->Arr[i];
        k++;
    }
    for(;j<arr2->length;j++){
        arr3->Arr[k] = arr2->Arr[j];
        k++;
    }
    // printf("Count:-\t%d",count);
    arr3->length =k;
    arr3->size =arr1->size+arr2->size;
    return arr3;
}

struct Array * merge(struct Array* arr1,struct Array* arr2){
    int count=0,i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
    
    while(i<arr1->length && j<arr2->length ){
        count++;
            // printf("Outside Values are  %d\t%d\n", i,j);
        if(arr1->Arr[i] < arr2->Arr[j]){
            // printf("First\n");
            arr3->Arr[k++] = arr1->Arr[i++];
        }else  {
            // printf("Second\n");
            arr3->Arr[k++] = arr2->Arr[j++];
        } 
    }
    
    for(;i<arr1->length;i++){
        count++;
        arr3->Arr[k] = arr1->Arr[i];
        k++;
    }
    for(;j<arr2->length;j++){
        count++;
        arr3->Arr[k] = arr2->Arr[j];
        k++;
    }
    // printf("Count:-\t%d",count);
    arr3->length =count;
    arr3->size =arr1->size+arr2->size;
    return arr3;
}


void reArrange(struct Array* arr){
    int i=0,j;
    j=arr->length-1;

    while(i<j){
        
        while(arr->Arr[i] < 0) i++;
        
        while(arr->Arr[j] >= 0) j--;
        
        if(i<j) swap(&arr->Arr[i],&arr->Arr[j]);
    }
}
int isFull(struct Array arr,bool print){
    if(arr.length==arr.size){
        if(print){
         printf("Sorry ,No more space!\n");           
        }
        return 1;
    } 
    else return 0;
}
void insertSort(struct Array* arr,int item){
    int sorted=checkSortedAsc(*arr),isArrayFull=isFull(*arr,true);
    
    if(sorted && arr->length<arr->size){
        int i=arr->length-1;

        while(i>=0 && arr->Arr[i]>item){
                arr->Arr[i+1]=arr->Arr[i];
                i--;
        }
        arr->Arr[i+1]=item;
            arr->length++;
    }
    else{
        printf("Sorry ,can't proceed further!!!\n");
    }
}
int checkSortedAsc(struct Array arr){    
    int i;
	for(i=0;i<arr.length-1;i++)
            if(arr.Arr[i]>arr.Arr[i+1])                    
                    return 0;
    return 1;
}
void swap(int* a,int* b){
 int temp=*a;
 *a=*b;
 *b=temp;   
}
void display(struct Array arr){
    // printf("From display %d",arr.length);
    if(arr.length!=0){
    printf("Elements in array are:-\n");
    int i;
	for(i=0;i<arr.length;i++) 
        printf("%d\t",arr.Arr[i]);
    
    printf("\n");
    }
} 

/*
struct Array * intersectionSort(struct Array * arrA,struct Array * arrB){
    int size;
    if(arrA->length>arrB->length) size=arrB->length;
    else if(arrA->length<arrB->length) size=arrA->length;
    else size=arrB->length;
    struct Array * arrI=(struct Array*)malloc(sizeof(int)*size);
    int i=0,j=0,k=0;
    while(i<size){
        if(arrA->Arr[i]<arrB->Arr[j]) i++;
        else if(arrA->Arr[i]>arrB->Arr[j]) j++;
        else if(arrA->Arr[i]==arrB->Arr[j])
        {
            arrI->Arr[k]=arrA->Arr[i];
             i++;
             j++;
             k++;
    printf("kkkkkkkkkkk %d\n",k);
    }}
    arrI->length=k;
    printf("kkkkkkkkkkk %d\n",k);
    return arrI;
}
*/