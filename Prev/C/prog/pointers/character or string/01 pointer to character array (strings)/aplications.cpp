#include <stdio.h> 
int main() 
{ 
	char s[] = "geeksquiz"; 
	printf("%lu", sizeof(s)); 
	s[0] = 'j'; 
	printf("\n%s", s);
	int x=sizeof(s);
	printf("\n%d",x); 
	return 0; 
} 

