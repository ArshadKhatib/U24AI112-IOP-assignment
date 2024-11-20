#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sort(char (*A)[100], int *arr, int n) 
{
    int temp;
    char Swap[100];
    
    for(int i = 0; i < n-1; i++) 
    {
        for(int j = 0; j < n-i-1; j++) 
        {
            if(*(arr + j) > *(arr + j + 1)) 
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;

                strcpy(Swap, *(A+j));
                strcpy(*(A+j), *(A+j+1));
                strcpy(*(A+j+1), Swap);

            }
        }
    }
}

int main() 
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][100]; 
    getchar();  
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf("%99[^\n]", strings[i]);  
        getchar();  
    }

    printf("\nEntered sentence was:\n");
    for (int j = 0; j < n; j++) 
    {
        printf("%s ",&strings[j]);
    }
    
    char (*P)[100] = strings;
    
    int count[n];  
    
    for (int j = 0; j < n; j++) 
    {
        count[j] = 0;
    }
    
    for (int i = 0; i < n; i++) 
    {
        count[i] = strlen(P[i]);  
    }

    sort(strings, count, n);

    printf("\n\nstrings in accending order are:\n");

    for (int j = 0; j < n; j++) 
    {
        printf("%s ",&strings[j]);
    }
    
    return 0;
}