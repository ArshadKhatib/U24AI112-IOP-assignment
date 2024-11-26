#include <stdio.h>
#include <stdlib.h>

int main(){
    int numbers[10];
    int zero = 0,positive = 0,negetive = 0;
    printf("This program will input 10 numbers from you and will give you how many numbers were positive and negetive.\n");
    for(int i=0;i<10;i++) {
        printf("Enter the number: \n");
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<10;i++) {
        if (numbers[i] == 1) {
            zero++;
        } else if (numbers[i] >0) {
            positive++;
        } else {
            negetive++;
        }
    }
    printf("Number of positive terms : %d\n",positive);
    printf("Number of negative terms : %d\n",negetive);
    printf("Number of zeros : %d\n",zero);
    return 0;
}