#include<stdio.h>
int main()
{
    
    double num1,num2;

    printf("Enter two numbers- ");
    scanf("%lf%lf",&num1,&num2);

    char op;

    printf("Select the Operation (+,-,*,/): ");
    scanf("%c",&op);

    switch(op)
    {
    case '+':
        printf("%lf + %lf = %lf",num1, num2, num1+num2);
        break;
    case '-':
        printf("%lf - %lf = %lf",num1, num2, num1-num2);
        break;
    case '*':
        printf("%lf * %lf = %lf",num1, num2, num1*num2);
        break;
    case '/':
        printf("%lf / %lf = %lf",num1, num2, num1/num2);
        break;
    default:
        printf("Incorrect Operation !");

    }

    return 0;
}
