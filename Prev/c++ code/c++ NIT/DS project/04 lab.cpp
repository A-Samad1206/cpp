#include <stdio.h>
int main()
{
    int array[50], pos, n, value;
    printf("Enter number of elements in the array:-\n");
    scanf("%d", &n);
    printf("Enter %d elements:-\n", n);
    for (int i = 0; i < n; i++)    
    scanf("%d", &array[i]);
    printf("Enter the location element to be inserted:-\n");
    scanf("%d", &pos);
    printf("Please enter the value:-\n");
    scanf("%d", &value);
    for (int i=n-1;i>=pos-1;i--){
		array[i+1] = array[i];
	}
    array[pos-1] = value;
    printf("New array is:-\n");
    for (int i = 0; i <= n; i++)    
	printf("%d\t", array[i]);    
}
