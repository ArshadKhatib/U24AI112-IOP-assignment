#include<stdio.h>

int main()
{
    int N;

    printf("Enter the No. of elements: ");
    scanf("%d",&N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        printf("Enter element [%d]", i+1);
        scanf("%d",&A[i]);
    }

    int *P;

    P = A;
    int Biggest = *P;

    for (int i = 0; i < N; i++)
    {
        if (Biggest < *(P +i))
        {
            Biggest = *(P+i);
        }
        
    }

    printf("Biggest No. in the List is: %d", Biggest);
    
    return 0;
}


