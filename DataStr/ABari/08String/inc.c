#include<stdio.h>
void exploreGetsPuts(){
   char *ne="";
   printf("Enter");
   gets(ne);
   puts(ne);
}
void charInit(){
      char a='a';
   /*
   Not allowed
   char b="b";
   */
   printf("A =%c  B= %c",a);
}
int main() {
   //String=Array of char+'\0' 
   char arrOfChar[]={'a','b','c'};
   //Strings
   // char str[10]={'a','b','c','\0'}; 
   // char str[]={'a','b','c','\0'}; 
   // char str[]="samad"; 
   char *str="samad"; 
   /* This is wrong
   char *strss='samad';
   char *strr={'a','b','c','\0'};  
   */
   printf("Str is :-%s \n",str); 
   // printf("%c",str[0]); 
  
   return 0;
}