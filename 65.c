#include<stdio.h>

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int SumR[3];
    
    printf("This Program will print Transpose of the Matrix\n");

    printf("Enter the elements for matrix 1: \n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        printf("Enter the elements: ");
        scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the elements for matrix 2: \n");
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
        printf("Enter the elements: ");
        scanf("%d",&matrix2[i][j]);
        }
    }

    printf("\n\n");

    printf("Matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
    printf("[\t");
    for(int j=0; j<3; j++)
    {
        printf("%d\t",matrix1[i][j]);
    }
    printf("]\n");

    }

    printf("\n\n");

    printf("Matrix 2 is: \n");
    for (int i = 0; i < 3; i++)
    {
    printf("[\t");
    for(int j=0; j<3; j++)
    {
        printf("%d\t",matrix2[i][j]);
    }
    printf("]\n");

    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix1[i][j]=matrix2[j][i];
        } 
    }
    
}