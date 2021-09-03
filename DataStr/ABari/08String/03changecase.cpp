#include<iostream>
using namespace std;

void changeCase(){
    char A[]="WeLc 0417 OmE";
    for(int i=0;A[i]!='\0';i++) {
        if(A[i] >= 'A' && A[i]<='Z')A[i]=A[i]+32;
        else if(A[i] >= 'a' && A[i]<='z') A[i]=A[i]-32;    
    };
    cout<<"\nnewStr\t:-\t"<<A;
}
 
int main(){
    changeCase();
    return 0;
}