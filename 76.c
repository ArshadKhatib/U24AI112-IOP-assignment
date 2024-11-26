#include<stdio.h>
int check(int a)
{
    if (a%2==0)
    {
        printf("No is Even");
    }
    else 
    {
        printf("No is Odd");
    }

    return 0;
    
}
int main()
{
    int num;
    printf("Enter a number to check if it is odd or even\n");
    scanf("%d",&num);

    return check(num);
}
