//Program to Check weather a No is Prime or Not

#include<stdio.h>
int main()
{
    int i,n,P;

    printf("Enter the number to check Prime or not- ");
    scanf("%d",&n);

    if(n==0 || n==1)
    {
        printf("They are neither prime nor composite");
    }

       for(i=2; i<= n/2; i++)
        {
            if(n%i==0)
            {
                printf("Entered No is not prime");
                break;
            }
            else
            {
                printf("Entered no is Prime");
                break;
            }

        }



    return 0;

}
