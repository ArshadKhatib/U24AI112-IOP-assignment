#include <stdio.h>
#include <conio.h>
// This program will print series of odd numbers
int main()
{
    int n;
    printf("1,3,5,7......,(n terms)\n");
    printf("Please enter the value of n: "); //For input of value of n
    scanf("%d", &n);
    for(int i=0; n<0; i++){     //Loop if user enters a negative integer
        printf("Please enter a positive integer: ");
        scanf("%d", &n);
    }
    for(int i=1 ; i<=2*n-1 ; i+=2){ //Loop for printing odd numbers
        printf("%d", i);
        if(i == 2*n-1){
            break;
        }
        printf(",");
    }
    getch();
    return 0;
}