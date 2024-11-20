#include<stdio.h>

int main()
{
    
int N;
int A[N];
int B[N];

printf("Enter the Array Size: ");
scanf("%d",&N);

for (int i = 0; i < N; i++)
{
    printf("Enter A[%d]", i);
    scanf("%d", &A[i]);
}

int *P = A;

for (int i = 0; i < N; i++)
{
    B[N - i -1] = *(P +i);

}

for (int i = 0; i < N; i++)
{
    printf("%d", A[i]);
}

printf("\n");

for (int i = 0; i < N; i++)
{
    printf("%d", B[i]);
}
 
    return 0;
}



