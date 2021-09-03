#include<stdio.h>
int main(){
    /*
    * void pointer(GENERIC POINTER) is special type of pointer capable to hold address of any datatype.
    * void does not know to wht type of datatype it is pointing so he can not be derefrenced directly.Type casting is required to access value.
    */    
   int a=10;
   float b=20.2;
   double c=2.45;
   void *p=&a;
   *(int *)(p)=40000;//Type casintf
   p=&b;
   p=&c;
   *(double *)(p)=0.25463;
   printf("Values is %lf",*(double *)(p));//Type casting is must bcoz it doesnot know to what type of data it is pointing
   /* ----On contrary void pointer to the int pointer will not allow to hold the address of var other int */
   int *q=&a;
//    q=&b;
//    q=&c;
    
    return 0;
}

/* 
 * Null pointer:-Pointer not having any memory address.
 * Used to initialize pointer var when it is not assigned any memory        address yet and to be assigned later in the code.
 * NULL is pre-defined macro defined stdio.h ,represents null value.
 
 * int *p=NULL;
 * int *q='\0';
 * int *p=0;
 * int *p=(int *)0;
*/