#include<stdio.h>
#include<malloc.h>

void reverse(char *str){
   int i=0,j,length=0;
   for(i=0;str[i]!='\0';i++);
   length=i;
   printf("Reverse\n");
   // char *temp=(char *)malloc(length*sizeof(char));
   for(i=0,j=length-1;i<j;i++,j--){
       printf("i=%d\tj=%d\tstr[i]=%c\tstr[j]=%c\n",i,j,str[i],str[j]);
      //  str[i]='a';
      char temp=str[i];
      str[i]=str[j];
      str[j]=temp;
   }
   printf("\nReverse is %s",str);
}
int main(){
   char str[]="abcdefghi";
   // char *str="abcdefghi"; // Does'nt work...!
   reverse(str);
 
   return 0;
}