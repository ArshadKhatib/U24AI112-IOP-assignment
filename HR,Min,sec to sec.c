//Program to convert Hr,Min,sec to total sec

#include<stdio.h>

int main()
{
    int H,M,S,T; //declaring essential parameters

    printf("Convertion of time in total Seconds\n\n");

    printf("Enter no of Hours- ");
    scanf("%d",&H);

    printf("Enter no of Minutes- ");
    scanf("%d",&M);

    printf("Enter no of Seconds- ");
    scanf("%d",&S);

    printf("\n\n");

    T= (H*3600)+(M*60)+S; //Formula to convert all in Seconds

    printf("Total no. of seconds are- %d",T);

    sleep(15);

    return 0;
}
