#include <stdio.h>
#include <conio.h>
// This program will print series of square of numbers
int main()
{
    int n;
    printf("1,4,9,16......,(n terms)\n");
    printf("Please enter the value of n: "); //For input of value of n
    scanf("%d", &n);
    for(int i=0; n<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    for(int i=1 ; i<=n ; i++){ //Loop for printing square of numbers
        printf("%d", i*i);
        if(i == n){
            break;
        }
        printf(",");
    }
    getch();
    return 0;
}