#include <stdio.h>
#include <conio.h>
// This program will print series of even numbers
int main()
{
    int n;
    printf("2,4,6,8......,(n terms)\n");
    printf("Please enter the value of n: "); //For input of value of n
    scanf("%d", &n);
    for(int i=0; n<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    for(int i=2 ; i<=2*n ; i+=2){ //Loop for printing even numbers
        printf("%d", i);
        if(i == 2*n){
            break;
        }
        printf(",");
    }
    getch();
    return 0;
}