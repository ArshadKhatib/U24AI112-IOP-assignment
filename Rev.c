#include<stdio.h>
int main()
{
    int num, tnum, digi;
    int rev =0;

    printf("Enter a number to Reverse it ");
    scanf("%d",&num);
    
    tnum = num;
    while (num != 0)
    {
        digi = num%10;
        rev = rev*10 + digi;
        num = num/10;
    }

    printf("Reverse of the entered no is %d",rev);

    return 0;
    
}