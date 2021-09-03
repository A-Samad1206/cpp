#include<stdio.h>
struct poly
{
    float coeff;
    int exp;
};          
struct poly a[50];
int main()
{
   int i;
  int deg;        
   int k=0;
   printf("Enter the highest degree of polynomial1:");
   scanf("%d",&deg);     
   for(i=deg;i>=0;i--)
   {   
       printf("\nEnter the coeff of x^%d :",i);
       scanf("%f",&a[i].coeff);
       a[k++].exp = i;
   }
   printf("\nExpression is \n");
   for(i=deg;i>0;i--)
   {
       printf("%.1fx^%d +",a[i].coeff,i);
   }
   printf("%f",a[0].coeff); 
   return 0;
}   
