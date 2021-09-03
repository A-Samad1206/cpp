#include<stdio.h>
// using namespace std;

void arrofcharwithsize(){
    char loo[10]={'s','a','m','a'};
    printf("arrofchar\t %s\n",loo);
    int i=0;
    while(loo[i]!='\0')
        printf("%c\t",loo[i++]);
    
    printf("\nLength of arrofchar is %d\n",i);
    printf("------------------\n");
}
void arrofcharwithoutsize(){
     char loo[]={'s','a','m','a','v'};
    printf("arrofcharwithoutsize\t %s\n",loo);
    int i=0;
    while(loo[i]!='\0')
        printf("%c\t",loo[i++]);
    
    printf("\nLength of arrofcharwithoutsize is %d\n",i);
    printf("------------------\n");
}


void strWithSize(){
    char loo[10]={'s','a','m','a','\0'};
    printf("strWithSize\t %s\n",loo);
    int i=0;
    while(loo[i]!='\0')
        printf("%c\t",loo[i++]);
    
    printf("\nLength of strWithSize is %d\n",i);
    printf("------------------\n");
}
void strWithoutSize(){
     char loo[]={'s','a','m','a','\0'};
    printf("strWithoutSize\t %s\n",loo);
    int i=0;
    while(loo[i]!='\0')
        printf("%c\t",loo[i++]);
    
    printf("\nLength of strWithoutSize is %d\n",i);
    printf("------------------\n");
}
void arrToStrWoSize(){
     char loo[]="samad";
    printf("arrToStrWoSize\t %s\n",loo);
    int i=0;
    while(loo[i]!='\0')
        printf("%c\t",loo[i++]);
    printf("\nLength of arrToStrWoSize is %d\n",i);
    printf("------------------\n");

}
void arrToStrWithSize(){
     char loo[10]="samad";
    printf("arrToStrWithSize\t %s\n",loo);
    int i=0;
    while(loo[i]!='\0')
        printf("%c\t",loo[i++]);
    printf("\nLength of arrToStrWithSize is %d\n",i);
    printf("------------------\n");

}

void pointerToString(){
 char *loo="samad";
    printf("pointerToString\t %s\n",loo);
    //  int i=0;
    // while(loo[i]!='\0')
    //     printf("%c\t",loo[i++]);
    
    // printf("\nLength of pointerToString is %d\n",i);
    // printf("------------------\n");


}

void directString(){
    
    // string loo4="samad";
    // printf("loo4");
    //  int i=0;
    // while(loo4[i]!='\0')
    //     printf("%c\t",loo4[i++]);
    // printf("\nLength of loo4 is %d\n",i);
    // printf("------------------\n");
}
int main(){
   
  arrofcharwithsize();
  arrofcharwithoutsize();
  strWithSize();
  strWithoutSize();
  arrToStrWoSize();
  arrToStrWithSize();
//   directString();
  pointerToString();
  


    


   




    /* Have to append with \0 at the end if declaring like below
     char loo2[]={'s','a','m','a'  };*/
    // printf("\nLoop\n\n"); 
    //  
     

    return 0;
}
