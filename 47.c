#include <stdio.h>
int main()
{
    int i,j;
    char p;

    printf("Enter the Alphabet till which you need the Alphabet Triangle: ");
    scanf("%c",&p);

    for (i = 65; i <= p; i++)
    {
        for (j = 65; j <= i; j++)
        {
            
            printf("%c", j);
        
        }
        printf("\n");

    }

    return 0;
    
}