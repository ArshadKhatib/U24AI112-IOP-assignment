#include <stdio.h>
int main()
{
    int p,i,j;

    printf("Enter the num till which you need * pattern: ");
    scanf("%d",&p);

    for (i = 0; i <= p; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
    
}