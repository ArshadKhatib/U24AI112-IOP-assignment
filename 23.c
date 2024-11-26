//Program to take 2 nos and get power

#include<stdio.h>
int main()
{
    int N,P,i,num=1; //initializing

    printf("Enter the number- ");
    scanf("%d",&N);

    printf("Enter power of the number- ");
    scanf("%d",&P);

    for(i=1;i<=P; i++) //Looping condition
    {
        num =num*N; //formula for looping

    }
    printf("\n\n%d to the power %d = %d\n", N, P, num);

    return 0;
}
