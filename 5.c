//program for swapping two no.s using 3 variables

#include<stdio.h>

int main()
{
    int a,b,c; //declaring essential variables

    printf("Enter the first No- ");
    scanf("%d",&a);

    printf("Enter the second No- ");
    scanf("%d",&b);

    printf("\n\n");

    printf("Before swapping first no. is- %d\nBefore swapping second no. is- %d", a, b); //No.s before swapping

    printf("\n\n");

    c=a;
    a=b;
    b=c;

    printf("After swapping first no. is- %d\nAfter swapping second no. is- %d\n", a, b); //No.s after swapping

    return 0;

}
