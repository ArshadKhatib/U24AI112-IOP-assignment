//Program to Compare 3 integers

#include<stdio.h>

int main()
{
    int a,b,c; //Declaring essential variables

    printf("Finding larger no\n");

    printf("\n *************** \n\n");

    printf("Enter the 1st no- ");
    scanf("%d",&a);

    printf("Enter the 2nd no- ");
    scanf("%d",&b);

    printf("Enter the 3rd no- ");
    scanf("%d",&c);

    printf("\n *************** \n\n");

    if(a>b && a>c) //Conditions
    {
            printf("a is larger no. \n\n");
    }
    else
    {
        if(b>c)
        {
            printf("b is larger no. \n\n");
        }
        else
        {
            printf("c is larger no. \n\n");
        }
    }

}
