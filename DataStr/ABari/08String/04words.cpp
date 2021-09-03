#include<iostream>
using namespace std;
void words(){
    // char *str="Counting Words and Vowels in a String";
    char *str="Aaaa Aaaa Aaaa              Aaaa Aaaa Aaaa Aaaa";
    int i=0,vcount=0,wcount=0,big=0,small=0,lcount=0;
    for(i=0;str[i]!='\0';i++){
        char temp=str[i];
        if(temp!=' ')lcount++;
        if(temp>='A' && temp<='Z') big++;
        if(temp>='a' && temp<='z') small++;

        // Neglect whitespace and check if last is not space.
        if(temp==32 && str[i+1]!=32 && str[i+1]!='\0')
        wcount++;

        if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u'||temp=='A'||temp=='E'||temp=='I'||temp=='O'||temp=='U')vcount++;
        
        // printf("%c =%d,,",str[i],str[i]);
    }
    printf("No. of Letters are:- %d",lcount);
    printf("\nNo. of words are:- %d",wcount+1);
    printf("\nNo. of Vowels are:- %d",vcount);
    printf("\nNo. of Constant are:- %d",lcount-vcount);
    printf("\nNo. of Capital Alphabet are:- %d",big);
    printf("\nNo. of Small Alphabet are:- %d",small);
} 
int main(){
    // words(); 
    return 0;
}