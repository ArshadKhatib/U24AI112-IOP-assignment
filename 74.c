/*Given are one dimensional arrays A and B which are sorted in ascending order.
Write a program to merge them into a single sorted array C that contains every
item form array A and B, in ascending order.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int array1[10],array2[10],sum[20];
    int min;
    int n = 19;
    printf("Getting array 1 from the user.\n");
    for(int i=0;i<10;i++) {
        printf("Input the number for the array 1:\n");
        scanf("%d",&array1[i]);
    }
    printf("Getting array 2 from the user.\n");
    for(int i=0;i<10;i++) {
        printf("Input the number for the array 2:\n");
        scanf("%d",&array2[i]);
    }
    printf("Array 1:\n");
    printf("[");
    for(int i=0;i<10;i++) {
        printf("%d  ",array1[i]);
    }
    printf("]\n");

    printf("Array 2:\n");
    printf("[");
    for(int i=0;i<10;i++) {
        printf("%d  ",array2[i]);
    }
    printf("]");
    for(int i=0;i<10;i++) {
        sum[i] = array1[i];
    }
    for(int i=0;i<10;i++) {
        sum[i+10] = array2[i];
    }
    printf("\nThe sum:\n");
    printf("[");
    for(int i=0;i<20;i++) {
        printf("%d  ",sum[i]);
    }
    printf("]\n");

    for(int i=0;i<20;i++) {
        min = 32000;
        for(int j=n;j>i;j--) {
            min = (min<sum[j] && min<sum[j-1])? min : ((sum[j]<sum[j-1])? sum[j] : sum[j-1]);
        }
        for(int k=n;k>i;k--) {
            if(min==sum[k]) {
                min = sum[i];
                sum[i] = sum[k];
                sum[k] = min;
            }    
        }
    }
     printf("\nThe sorted sum:\n");
    printf("[");
    for(int i=0;i<20;i++) {
        printf("%d  ",sum[i]);
    }
    printf("]");
    return 0;
}