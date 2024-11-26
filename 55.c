#include <stdio.h>

int main(){
    int numbers[10];
    int a;
    int odd = 0,even = 0;
    printf("This program will input 10 numbers from you and will give you how many numbers were odd and even.\n");
    for(int i=0;i<10;i++) {
        printf("Enter the number: \n");
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<10;i++) {
        a = numbers[i] % 2;
        if (a == 1) {
            odd++;
        } else {
            even++;
        }
    }
    printf("Number of odd terms : %d\n",odd);
    printf("Number of even terms : %d\n",even);
    return 0;
}