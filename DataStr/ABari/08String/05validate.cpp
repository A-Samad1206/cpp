#include<iostream>
using namespace std; 
int valid(char *name){
    int i;
    for(i=0;name[i]!='\0';i++){
        if(
            !(name[i]>='A' && name[i]<='Z') && 
            !(name[i]>='a' && name[i]<='z') && 
            !(name[i]>=48 && name[i]<=56)        
        ) {return 0;  }
    }
            return 1;        

}
int main(){ 
    int val=valid("anil1223");
    cout<<"String is "<<val;
    return 0;
}