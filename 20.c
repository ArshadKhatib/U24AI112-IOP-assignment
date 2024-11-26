#include<stdio.h>
int main()
{
    
    double num1,num2;
    char op;

    printf("Enter two numbers- ");
    scanf("%lf%c%lf",&num1 ,&op, &num2);

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
    
    }

    return 0;
}
