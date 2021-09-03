#include<stdio.h>
void pall(){
   char *str="ABCDCBa";
   int length,i=0,j=0,flag;
   for(i=0;str[i]!='\0';i++);
   length=i;
   j=length-1;
   i=0;
   while(i<=j){ 
      if(str[i++]!=str[j--]) {
         
         flag=0; 
            break;
         }else flag=1;
      }
   if(flag)printf("Yes");
   else printf("No");
}
int main(){
   pall();
   return 0;
      
}