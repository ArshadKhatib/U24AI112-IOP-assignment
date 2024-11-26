#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() 
{
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("\nBigger number between %d and %d is: %d\n",num1, num2, MAX(num1, num2));
    return 0;
}