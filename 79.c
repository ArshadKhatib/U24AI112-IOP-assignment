//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y
#include <stdio.h>
#include <stdlib.h>

void my_function(int x,int y) {
    int swap;
    swap = x;
    x = y;
    y = swap;
    printf("x = %d and y = %d",x,y);
}

int main() {
    int a,b;
    printf("This program will call a function which will swap two numbers inputed by the user.\nEnter the numbers:\nTHe first number: ");
    scanf("%d",&a);
    printf("The second number: ");
    scanf("%d",&b);
    printf("x = %d and y = %d",a,b);
    my_function(a,b);
    return 0;
}