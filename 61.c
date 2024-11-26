#include <stdio.h>

int main()
{ 
    int array[10];
    int swap;
    int n = 9;
    printf("BUBBLE Sort an array.\n");
    for(int i=0;i<10;i++) {
        printf("Input the number for the array:\n");
        scanf("%d",&array[i]);
    }
    printf("Present array...\n");
    for(int i=0;i<10;i++) {
        printf("%d  ",array[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++) {
        for(int j=0;j<n;j++) {
            if(array[j]>array[j+1]) {
                swap = array[j] ;
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }
    printf("The bubble sorted array in accending order:\n");
    for(int i=0;i<10;i++) {
        printf("%d  ",array[i]);
    }
    return 0;
}   