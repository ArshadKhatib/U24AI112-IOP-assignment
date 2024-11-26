#include <stdio.h>

int main()
{
    int numbers1[10];
    int lol = 0;
   printf("This program will input 10 numbers from you and will save them in an array and output the reversed array.\n");
    for(int i=0;i<10;i++) {
        printf("Enter the number for array : \n");
        scanf("%d",&numbers1[i]);
    }  
        for(int i=0;i<5;i++) {
        lol = numbers1[i]; 
        numbers1[i] = numbers1[9-1];
        numbers1[9-i] = lol;
    }
     printf("The reversed array: ");
    for(int i=0;i<10;i++) {
       printf("%d ",numbers1[i]);
    }
    return 0;
}