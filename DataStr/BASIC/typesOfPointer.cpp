#include<stdio.h>
int main(){
    int a=10,b=20,c=30;
    int *point=&a;//simple
    /*-----------constant poinetr----------*/
    //Declare time defining is must.
    //Address cannot be changed.
    //But values can be change.
    int * const p=&a;//read as const pointer pointing to var a of type int.
    // p=&b;// render error
    *p=30;//allow    
    
    /*-------Pointer to constant-------*/
    //Defined at declare time or after that.
    //Address can be changed.
    //But values can not be change.
    //On changing address ,value an be change.
    int const * q=&b;//read as q pointer pointing to const b of type int.
    // const int *q=&b;//Both are valid
    q=p;
    // *q=30;//render arror
    
    /*-------------Contant pointer to constant------*/
    //Decalring time definie is must.
    //Both value and address cannot be changed
    int const *const p3=&c;
    // p3=p;//redner error
    // *p3=4000;//render error
    // const int *const p3=&c;

    return 0;
}