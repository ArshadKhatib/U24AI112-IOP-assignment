#include <stdio.h>

int main()
{
    int numbers1[10];
    int numbers2[10];
    int lol = 0;
    printf("This program will input 20 numbers from you and will save them in 2 different arrays and form a new array which consists values of both the arrays.\n");
    for(int i=0;i<10;i++) {
        printf("Enter the number for array 1: \n");
        scanf("%d",&numbers1[i]);
    }  
    for(int i=0;i<10;i++) {
        printf("Enter the number for array 2: \n");
        scanf("%d",&numbers2[i]);
    }
    for(int i=0;i<10;i++) {
        lol = numbers1[i]; 
        numbers1[i] = numbers2[i];
        numbers2[i] = lol;
    }
    printf("The array 1: ");
    for(int i=0;i<10;i++) {
       printf("%d ",numbers1[i]);
    }
    printf("\n");
    printf("The array 2: ");
       for(int i=0;i<10;i++) {
       printf("%d ",numbers2[i]);
    }
    return 0;
}