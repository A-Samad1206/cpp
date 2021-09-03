// #include<iomanip>
// #include<stdio.h>
/*  
    They are called refreence bcoz for example int a;
    
    It is decalaring with var 'a' as of int type.
    
    By putting ampersend before var It will become refreence tyep datatype.
    
    They(reference var)  must be initilsed at decalred time.
    
    They are secure,bcoz later the user is not allowed to change address.

    Aliase operator
    Link operator
    Copy operator

*/
#include<iostream>
void swap(int &a,int &b){
    
    std::cout<<"\n"<<&a<<" "<<&b<<"\n";
    int temp=a;
    a=b;
    b=temp;
    std::cout<<a<<" "<<b<<"\n";
}
int main(){
    int a=10;
    int &b=a;
    int &c=b;
    c=999;
    std::cout<<a<<" "<<b<<" "<<c;
    int x=20,y=30;
    swap(x,y);
    return 0;
}
