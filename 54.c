#include <stdio.h>

int main()
{
    int numbers[10];
    int a = 0;
    printf("This program will input 10 numbers from you and will give you it's sum.\n");
    for(int i=0;i<10;i++) {
        printf("Enter the number: \n");
        scanf("%d",&numbers[i]);
        a = a + numbers[i];
    }
    printf("%d",a);
    return 0;
}