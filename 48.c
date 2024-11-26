#include <stdio.h>
int main()
{
    int i,j,m,p;

    printf("Enter the Number till which you need the Number Triangle: ");
    scanf("%d",&p);

    for (i = 1; i <= p; i++)
    {
        for (m = p; m >=0 ; m--)
        {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        
        }
        printf("\n");

    }

    return 0;
    
}