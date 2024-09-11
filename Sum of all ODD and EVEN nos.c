//Program to find sum of odd and even nos from 1 to N


#include<stdio.h>
int main()
{
    int n;
    float sumO,sumE,T;

    printf("Program to print sum of ODD and EVEN no from 1 to N\n\n");
    printf("Enter the value of N- ");
    scanf("%d",&n); //Input

    sumO = (n/2)*(2+((n-1)*2)); // Formulas
    sumE = (n/2)*(4+((n-1)*2));
    T= sumE+sumO;

    printf("\n\nSum of ODD nos from 1 to N is %f\n\n",sumO); //Results
    printf("sum of EVEN nos from 1 to N is %f\n\n",sumE);
    printf("Total sum is %f\n\n",T);

    getch();
}
