//Program for Calculation of Percentage of marks of a Student


#include<stdio.h>

int main()
{
    int P, C, M, E, F, H; //All Essential parameters decleared

    printf("STD 12th Board marksheet \n\n");

    printf("Enter your Physics Marks- ");
    scanf("%d",&P);

    printf("Enter your Chemistry Marks- ");
    scanf("%d",&C);

    printf("Enter your Maths Marks- ");
    scanf("%d",&M);

    printf("Enter your English Marks- ");
    scanf("%d",&E);

    printf("Enter your 5th subject marks- ");
    scanf("%d",&F);

    printf("\n");

    H=(P+C+M+E+F)/5; //Formula for calculation of Percentage of candidate marks

    printf("Overall percentage of the Candidate is- %d", H);

    printf("\n");

    sleep(30);


    return 0;
}
