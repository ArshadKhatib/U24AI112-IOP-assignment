#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void stcpy(char *A);
void stcmp(char *A, char *B);
void stcat(char *A, char *B);

int main()
{
    int N= 123456;
    char C[100], D[100], E[100], F[100], G[100];

    while (N != 0)
    {
        printf("\npress 0 to exit\n");
        printf("press 1 to copy ypour string: \n");
        printf("press 2 to comapare 2 strings: \n");
        printf("press 3 to concatinate 2 strings: \n");
        printf("press 4 to reverse you string: \n");

        scanf("%d",&N);
        if (N == 1)
        {
            printf("Enter your string: \n");
            scanf(" %[^\n]s", C);
            //fgets(C, sizeof(C), stdin);
            stcpy(C);
        }

        if (N ==2)
        {
            printf("Enter your 1st string: ");
            scanf(" %[^\n]s", D);
            printf("Enter your 2nd string: ");
            scanf(" %[^\n]s", E);
            stcmp(D,E);
            
        }
        
        if (N ==3)
        {
            printf("Enter your 1st string: ");
            scanf(" %[^\n]s", D);
            printf("Enter your 2nd string: ");
            scanf(" %[^\n]s", E);
            stcat(F,G);
            
        }
        
    }
    
    
    return 0;
}

void stcpy(char *A)
{
    char *P;
    P =A;
    char B[100];

    for (int i = 0; *P != '\0'; i++)
    {
        B[i] = (*P);
        P++;
    }

    printf("\nThe copied string is: %s\n",B);
    
}

void stcmp(char *A, char *B)
{
    char *P;
    char *O;
    P =A;
    O =B;

    char C[100];

    for (int i = 0; *P != '\0'; i++)
    {
        if (*P != *O)
        {
            printf("\nStrings are not equal !\n");
            break;
        }
        else
        {
            printf("\nStrings are equal !\n");
            break;
        }
        P++;
        O++;
        
    }
}

void stcat(char *A, char *B)
{
    char *P;
    char *O;
    P =A;
    O =B;

    char C[100];

    for (int i = 0; *P != '\0'; i++)
    {
        C[i] =(*P);

        P++;
    }
    int x;
    x = strlen(C);
    for (int i = x; *O != '\0'; i++)
    {
        C[i] =(*O);
        O++;
    }
    printf("\n%s\n",C);
}