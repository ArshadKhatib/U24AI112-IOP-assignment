#include<stdio.h>
int main()
{
    int p,c,m,e,cs,sum;
    float avg;

    printf("Enter you physics marks- ");
    scanf("%d",&p);

    printf("\n\nEnter your chemistry marks- ");
    scanf("%d",&c);

    printf("\n\nEnter your maths marks- ");
    scanf("%d",&m);

    printf("\n\nEnter your english marks- ");
    scanf("%d",&e);

    printf("\n\nEnter your computer science marks- ");
    scanf("%d",&cs);

    sum= p+c+m+e+cs;

    avg= sum/5;

    printf("\n\nTotal Marks are %d \nAverage is %f\n\n",sum, avg);

    return 0;


}
