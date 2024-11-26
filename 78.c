//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include <stdio.h>
#include <stdlib.h>

void my_function(int n) {
     int i,power_10,lol,temp_n;
    n = 1;
    int num[10];
    num[0] = num[1] = num[2] = num[3] = num[4] = num[5] = num[6] = num[7] = num[8] = num[9] = 0;
    temp_n = n;
    for(i=1;i<11;i++) {
        power_10 = 1;
        for(int f=0;f<i;f++) {
             power_10 = power_10*10;
            }
        num[i-1] = n%power_10;
        n = n - num[i-1];
        power_10 = power_10/10;
        num[i-1] = num[i-1]/(power_10);
        }
    lol = 0;
    for(i=0;i<10;i++){
        num[i] = num[i] * num[i] * num[i];
       lol = lol + num[i];
    }
    if(lol==temp_n) {
        printf("The Entered number is an Armstrong number.");
    } else {
        printf("The Entered number is not an Armstrong number.");
    }
}

int main(){
    int number;
    printf("This program will tell you whether a number is Armstrong number.\n");
    printf("Enter your number: ");
    scanf("%d",&number);
    my_function(number);
    return 0;
}