#include<stdio.h>
#include<ctype.h>

int main()
{
    int a,b;

    scanf("%d%d",&a,&b);

    if (isdigit(a)==0 && isdigit(b)==0)
    {
        printf("It is an integer ");
    }
    else
    {
        printf("It is not an integer");
    }

    return 0;
}