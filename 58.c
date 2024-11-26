#include <stdio.h>
#include <stdlib.h>

int main(){
    int numbers1[10];
    int numbers2[10];
    int boom[20];
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
        boom[i] = numbers1[i]; 
    }
    for(int i=0;i<10;i++) {
        boom[i+9] = numbers2[i];
    }
    for(int i=0;i<20;i++) {
        printf("%d ",boom[i]);
    }
    return 0;
}