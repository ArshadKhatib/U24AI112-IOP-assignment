#include <stdio.h>
#include <conio.h>
//This program will print 1/1!+2/2!+3/3!....(n terms) series
int main()
{
    float n;
    double c=0;
    unsigned long long int a=1;
    unsigned long long int b=1;
    printf("1/1! + 2/2! + 3/3! ......+(n terms) [From (1-20)]\n");
    printf("Please enter the value of n: "); //For input of value of n
    scanf("%f", &n);
    for(int i=0; n<0 || n>20; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer(1-20): ");
        scanf("%f", &n);
    }
    for(int i=1 ; i<=n ; i++){ //Loop for question printing
        printf("%d/%d!", i,i);
        if(i == n){
            break;
        }
        printf(" + ");
    }
    printf("\n");
    for(int i=1 ; i<=n ; i++){ //Loop for value printing value
        a*=i;
        printf("%d/%llu", i,a);
        if(i == n){
            break;
        }
        printf(" + ");
    }
    for(double i=1 ; i<=n ; i++){ //Loop for calculation of Expression value
        b*=i;
        c+=i/b;
    }
    printf("\nThe value of expression is %f", c); //Output of Expression value
    getch();
    return 0;
}