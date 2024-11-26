#include<stdio.h>
int main()
{
    int num,i,fac =1;


    printf("Enter the number to generate its Factorial- ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("Factorial only exists for positive numbers");
    }
    else{

    for(i=1; i<=num; i++)
    {
        fac=fac*i;

    }
    }
    printf("%d ! = %d \n",num, fac);

    return 0;
}

