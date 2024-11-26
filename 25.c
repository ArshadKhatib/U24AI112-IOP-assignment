//Program to print table of any no

#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter the number to generate its Table- ");
    scanf("%d",&num);

    for(i=1; i<=10; i++) //conditions for loop
    {
        printf("%d x %d = %d \n",num, i, num*i); //Formula and representation of table
    }

    return 0;
}
