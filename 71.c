//Write a program in C to find the pivot element of a sorted and rotated array
//using binary search
#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10];
    int min;
    int n = 9;
    printf("Getting a ;pivot element of an array.\n");
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
        min = 32000;
        for(int j=n;j>i;j--) {
            min = (min<array[j] && min<array[j-1])? min : ((array[j]<array[j-1])? array[j] : array[j-1]);
        }
        for(int k=n;k>i;k--) {
            if(min==array[k]) {
                min = array[i];
                array[i] = array[k];
                array[k] = min;
            }    
        }
    }
    printf("The pivot element will be the First element of the Sorted array\n");
    printf("The selection sorted array in accending order:\n [\t");
    for(int i=0;i<10;i++) 
    {
        printf("%d\t",array[i]);
    }
    printf("]");

    return 0;
}