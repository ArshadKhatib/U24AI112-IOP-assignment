#include <stdio.h>
#include <conio.h>
//This program will tell if a number is prime or not
int main()
{
    int n;
    printf("Please enter the integer: "); //For input of value of n
    scanf("%d", &n);
    for(int i=0; n<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    if(n==0 || n==1){
        printf("%d is neither prime nor composite", n);
    }
    else if(n==2){
        printf("%d is a prime number", n);
    }
    else{
    for(int i=2; i<=n-1; i++){ //Output
        if(n%i == 0){
            printf("%d is a composite number\n", n);
            for(int i=1; i<=n; i++){ // For calculating factors
            if(n%i==0){
            printf("%d", i);
            if(i!=n){
                printf(",");
            }
            }
        }
        printf(" are factors of %d", n);
            break;
        }
        else if (i == n-1){
            printf("%d is a prime number", n);
        }
    }
    }
    getch();
    return 0;
}