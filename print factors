#include <stdio.h>
#include <conio.h>
//This program will print factors of the input number
int main()
{
    int n;
    printf("Please enter the value of n: "); //For input of value of n
    scanf("%d", &n);
    for(int i=0; n<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer(1-20): ");
        scanf("%d", &n);
    }
    for(int i=1; i<=n; i++){ // For calculating factors
        if(n%i==0){
            printf("%d", i);
            if(i!=n){
                printf(",");
            }
        }
    }
    printf(" are factors of %d", n);
    getch();
    return 0;
}