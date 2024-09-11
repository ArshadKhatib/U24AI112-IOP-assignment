#include<stdio.h>
int main()
{
    int num, tnum, digi;
    int rev =0;

    printf("Enter a number to check if it is Palindrome ");
    scanf("%d",&num);
    
    tnum = num;
    while (num != 0)
    {
        digi = num%10;
        rev = rev*10 + digi;
        num = num/10;
    }
    if (rev==tnum)
    {
        printf("Entered no. is a Palindrome");
    }
    else
    { 
        printf("Entered no. is not a Palindrome");
    }
    
    return 0;
    
}