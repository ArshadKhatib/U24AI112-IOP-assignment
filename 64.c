#include<stdio.h>

int main()
{
    int matrix[3][3];
    int SumR[3];
    
    printf("This Program will find the max and min element of the Matrix\n");
 

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        printf("Enter the elements: ");
        scanf("%d",&matrix[i][j]);
        }
    }

    printf("Matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
    printf("[\t");
    for(int j=0; j<3; j++)
    {
        printf("%d\t",matrix[i][j]);
    }
    printf("]\n");

    }

    for (int i = 0; i < 3; i++)
    {
        SumR[i]= matrix[0][i]+matrix[1][i]+matrix[2][i];
    }

    printf("The Sum: \n");
    for (int i = 0; i < 3; i++)
    {

    printf("Sum of column%d is-\t%d\t",i+1,SumR[i]);

    printf("\n");

    }

    return 0;
}