//PROGRAM TO CHECK WHETHER A NO IS AN ARMSTRONG OR NOT.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,power_10,A,tnum;
    n = 1;
    int no[10];
    no[0] = no[1] = no[2] = no[3] = no[4] = no[5] = no[6] = no[7] = no[8] = no[9] = 0;
    printf("This program will tell you whether a number is Armstrong number.\n");
    printf("Enter your number: ");
    scanf("%d",&n);
    tnum = n;
    for(i=1;i<10;i++) {
        power_10 = 1;
        for(int f=0;f<i;f++) {
             power_10 = power_10*10;
            }
        no[i-1] = n%power_10;
        n = n - no[i-1];
        power_10 = power_10/10;
        no[i-1] = no[i-1]/(power_10);
        }
    A = 0;
    for(i=0;i<10;i++){
        no[i] = no[i] * no[i] * no[i];
       A= A + no[i];
    }
    if(A==tnum) {
        printf("The Entered number is an Armstrong number.");
    } else {
        printf("The Entered number is not an Armstrong number.");
    }
    return 0;
}