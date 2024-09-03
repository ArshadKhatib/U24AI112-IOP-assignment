//program to find max of 3 nos using ?: operator

#include<stdio.h>
int main()
{
    int a,b,c,large;

    printf("Enter 3 Numbers- ");
    scanf("%d%d%d",&a, &b, &c);

    large =(a>b&&a>c?a:b>c?b:c); // Condition that checks if 'a' is largest else checks among 'b' and 'c'

    printf("The Largest value is %d",large); //printing the largest value

    return 0;
}
