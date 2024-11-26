//WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUMBERS.TEST THE FUNCTION FOR N=5,10,AND 15
#include <stdio.h>
#include <stdlib.h>

void my_function(float n) {
    long int fabnum1,fabnum2;
    fabnum1 = 0;
    fabnum2 = 1;
    n = n - 2;
    printf(" %ld, %ld",fabnum1,fabnum2);
    n = n/2;
    for(int i =0;i<n;i++) {
    fabnum1 = fabnum1 + fabnum2;
    printf(", %ld",fabnum1);
    fabnum2 = fabnum1 + fabnum2;
    printf(", %ld",fabnum2);
    }
    printf(".");    
    return ; 
}
int main() {
    float num;
    printf("Enter how many Fibonacci numbers do you want in output: \n");
    scanf("%f",&num);
    my_function(num);
    return 0;
}