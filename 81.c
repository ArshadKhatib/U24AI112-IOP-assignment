#include<stdio.h>
int P(int num)
{
    for(int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            printf("No is Not Prime");

        break;
        }
        else
        {
            printf("No is Prime");

            break;
        }
    }
    return 0;
}
int main()
{
    int N;
    printf("Emnter a num to check it is prime or not: ");
    scanf("%d",&N);

    return P(N);
}