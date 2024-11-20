#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void vowels(char *A, int *count);  

int main()
{
    char B[100];
    int co_vo = 0;

    printf("Enter your sentence: ");
    fgets(B, sizeof(B), stdin);

    vowels(B, &co_vo);

    printf("\nThere are %d vowels in the sentence.", co_vo);
    
    return 0;
}

void vowels(char *A, int *count)
{
    char V[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};  
    int vowel_count = sizeof(V) / sizeof(V[0]);  
    
    *count = 0;
    char *P = A;
    
    while (*P != '\0')
    {
        for (int i = 0; i < vowel_count; i++)  
        {
            if (*P == V[i])
            {
                (*count)++;  
                break;  
            }
        }
        P++;
    }
}