#include<stdio.h>
// #define SIZE 5
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>
struct Array{
    // int *Arr;
    int Arr[10];
    int size;
    int length;// Indicate No. of element.

};

void display(struct Array);
void append(struct Array*,int);
void insert(struct Array*,int index,int item);
void removeItem(struct Array*,int index);
// O(n)
int linerSearch(struct Array*,int key);
int binarySearch(struct Array,int key);
int RBinSearch(int arr[],int key,int low,int high);
int get(struct Array,int);
void set(struct Array*,int,int);
int Min(struct Array);
int Max(struct Array);
float avg(struct Array);
int sum(struct Array);
void reverse(struct Array*);
void leftShift(struct Array*);
void leftRotate(struct Array*);
void rightShift(struct Array*,int item,int increaseLengthBy);
void rightRotate(struct Array*);
int isSortedAsc(struct Array);
int isSortedDsc(struct Array);
void resize(struct Array*,int);
// utils functions
int isFull(struct Array,bool print);
int isEmpty(struct Array,bool print);
void swap(int*,int*);


int main(){

    struct Array arr1={{2,6,10,15,25},10,5};
    printf("Before Insert\n");
    display(arr1);
    printf("After Insert");
    removeItem(&arr1,2);
    // struct Array arr2={{3,4,7,18,20},10,5};
    // struct Array *arrM=merge(&arr1,&arr2);
    display(arr1);
    return 0;

}

void resize(struct Array* arr,int size){

    int *new,*tempArray;
    tempArray =(int*)calloc(arr->length,sizeof(int));

    // Duplicate the old contents.
    int i=0;
	for(i=0;i<arr->length;i++) tempArray[i]=arr->Arr[i]; 
    
    new=realloc(arr->Arr,size*sizeof(int));
    
    //In case memory allocation failed.
    while(new==NULL){
    new=(int *)realloc(arr->Arr,size*sizeof(int));
    }
    // printf("From Function\t%u\n",new);        
    
    if(new!=NULL){
        // Copy the old content to newly created array.
        int i;
		for(i=0;i<arr->length;i++){
            arr->Arr[i]=tempArray[i];
        }
        // arr->Arr+0=&new[0];
        arr->size=size;
    }
}

int isSortedAsc(struct Array arr){    
    int i;
	for(i=0;i<arr.length-1;i++)
            if(arr.Arr[i]>arr.Arr[i+1])                    
                    return 0;
    return 1;
}
int isSortedDsc(struct Array arr){
    int i;
	for(i=0;i<arr.length-1;i++)
            if(arr.Arr[i+1]>arr.Arr[i])
                return 0;
    return 1;
}

void rightShift(struct Array *arr,int index,int len){
     int i;
	for(i=arr->length-1;i>=index;i--){
        arr->Arr[i+1]=arr->Arr[i];
    }
    arr->length=arr->length+len;
}

void rightRotate(struct Array *arr){
    int temp=arr->Arr[arr->length-1];
    rightShift(arr,0,0);
    arr->Arr[0]=temp;
}



void leftShift(struct Array* arr){
 int i;
     for(i=0; i<arr->length-1;i++)
         arr->Arr[i]=arr->Arr[i+1];

    arr->length--;
}
void leftRotate(struct Array* arr){
    int temp=arr->Arr[0];
    leftShift(arr);
    arr->Arr[arr->length-1]=temp;
}

void reverse(struct Array *arr){
    //Method 1 :- Copy to other/auxillary array,then re-maping to original array. 
    // int *p=(int *)malloc(sizeof(int)*arr->length);
    // for(int i=0;i<arr->length;i++){
    //     p[i]=arr->Arr[arr->length-1-i];
    // }
    // int i=0,j=0;
    // for(i=arr->length-1,j=0; i>=0; i--,j++){
    //     p[j]=arr->Arr[i];
    // }
    // for(int i=0;i<arr->length;i++){
    //     arr->Arr[i]=p[i];
    // }
    
    //Method 2 :- Swapping the position of array

    int i=0,j=0;
    for(i=0,j=arr->length-1;i<j;i++,j--){
       int a=arr->Arr[i],b=arr->Arr[j];
        
        a=a+b;
        b=a-b;
        b=a-b;
    }
}


int get(struct Array arr,int index){
    if(index<arr.length && index>=0) 
        return arr.Arr[index];
    else
        printf("Enter a valid position!\n");
}
void set(struct Array *arr,int index,int item){
    if(index < (*arr).length && index>=0)
        arr->Arr[index]=item;                
    else
        printf("Enter a valid position!\n");
}
int Min(struct Array arr){
    int min=arr.Arr[0];
    int i;
	for(i=1;i<arr.length;i++){
        if(arr.Arr[i]<min){
            min=arr.Arr[i];
        }
    }
    return min;
}
int Max(struct Array arr){
    int max=arr.Arr[0];
    int i;
	for(i=1;i<arr.length;i++){
        if(arr.Arr[i]>max){
            max=arr.Arr[i];
        }
    }
    return max;
}

float avg(struct Array arr){
    return (float)sum(arr)/arr.length;
}
 
int sum(struct Array arr){
         int sum=0;
    int i;
	for(i=0;i<arr.length;i++){
        sum+=arr.Arr[i];
    }
    return sum;
}

int RBinSearch(int arr[],int key,int low,int high){
    int med;
    if(low<=high){
        med=(low+high)/2;
    
        if(key==arr[med]) 
            return med;
    
        else if(key<arr[med])
            return RBinSearch(arr,key,low,med-1);
    
        else if(key>arr[med])
            return RBinSearch(arr,key,med+1,high);
    }
    return -1;
}

int binarySearch(struct Array arr,int key){
    int low=0,high=arr.length-1,med;

    while(low<=high){
        med=(high+low)/2;

        if(key<arr.Arr[med])
            return high=med-1;

        else if(key>arr.Arr[med])
            return low=med+1;

        else if(key==arr.Arr[med])
            return med;

    }
    return -1;
//O(ceil(log2^n+1))
// ceil of log of base 2 of the number of elements+1
//Best case =1
//Worst case =log2^n
//Average case=log^2n
//Unsuccessfull=log^2n

}

int linerSearch(struct Array *arr,int key){
    int flag=-1;
    int i;
	for(i=0;i<arr->length;i++){
        if(arr->Arr[i]==key){
            swap(arr->Arr+i,arr->Arr);
            flag=0;
        }
    }
    return flag;
}

void removeItem(struct Array* arr,int index){
    if(isEmpty(*(arr),true)) goto exit;
    
    if(index > arr->length || index<=0) {
        printf("Enter a valid index!\n");
        goto exit;
    }
    // for(int i=index-1;i<length-1;i++)arr[i]=arr[i+1];

    int i;
	for(i=index;i<arr->length-1;i++)
        arr->Arr[i]=arr->Arr[i+1];
    
    arr->length--;
    
    exit:;
}

void insert(struct Array *arr,int index,int item){
    if(isFull(*(arr),true)) goto exit;
    
    if(isEmpty(*(arr),true)) goto exit;

    if(index > arr->length+1 || index<=0) {
        printf("Enter a valid index!\n");
        goto exit;
    }

    int i;

    for(i=arr->length-1;i>=index;i--)
        arr->Arr[i+1]=arr->Arr[i];

    arr->Arr[index]=item;          
    arr->length++;

    exit:; 
}

void append(struct Array *arr,int item){
    if(!isFull(*(arr),true)) {    
    arr->Arr[arr->length]=item;
    arr->length++;
    }
}


void display(struct Array arr){
    if(isEmpty(arr,true)) goto exit;
    
    printf("Elements in array are:-\n");
    int i;
	for(i=0;i<arr.length;i++) 
        printf("%d\t",arr.Arr[i]);
    
    printf("\n");
    
    exit:;
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
int isEmpty(struct Array arr,bool print){
    if(arr.length==0){
        if(print){
         printf("Sorry ,No Array is Empty!\n");
         return 1;
         }
     }
    else return 0;
}

void swap(int* a,int* b){
 int temp=*a;
 *a=*b;
 *b=temp;   
}
