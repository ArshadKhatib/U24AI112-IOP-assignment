//Program to Find value of Function Y
#include<stdio.h>
int main()
{
    int i,s=1;
    float x,n,Y=1;

    printf("Function Y(x,n) is --- 1+ x   for n=1\n");
    printf("                   --- 1+ x/n for n=2\n");
    printf("                   --- 1+ x^n for n=3\n");
    printf("                   --- 1+ nx  for n>3 & n<1\n\n");

    printf("Enter the value of n- ");
    scanf("%f",&n);
    printf("\nEnter the value of x- ");
    scanf("%f",&x);

    if(n==1)
    {
        Y= 1+x;

        printf("Value of Function Y is %f",Y);
    }
    else if(n==2)
    {
        Y= 1+(x/n);

        printf("value of Function Y is %f",Y);
    }
    else if(n==3)
    {
        for(i=1; i<=n; i++)
        {
            s=s*x;
        }

        Y= 1+s;

        printf("value of Function Y is %f",Y);
    }
    else if(n>3 || n<1)
    {
        Y= 1+(x*n);

        printf("value of Function Y is %f",Y);
    }
    else
    {
        printf("Function not defined for the entered Domain");
    }

    return 0;

}
