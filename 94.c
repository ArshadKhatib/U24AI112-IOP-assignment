#include<stdio.h>
#include<string.h>

void reverse(char *A, char *B, int N)
{
    char *P1 = A;
    int j =1;

    N = strlen(A);

    for (int i = 0; i < N; i++)
    {
        B[i] = A[N - i -1];
    }
    B[N] ='\0';
    
    
    
}

int main()
{
    

    printf("Enter the Size of sent: \n");
    int N;
    scanf("%d",&N);
    
    getchar();

    printf("Enter the sentence:\n");
    char A[N+1];
    fgets(A, sizeof(A), stdin);

    char B[N+1];

    reverse(A, B, sizeof(A));

    printf("\nReversed sentence is:\n%s", B);

    return 0;
}

