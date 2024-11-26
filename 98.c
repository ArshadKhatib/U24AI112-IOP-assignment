#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int r1, c1, r2, c2;
    int **matrix1, **matrix2, **result;
    int i, j, k;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }

    matrix1 = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) 
    {
        matrix1[i] = (int *)malloc(c1 * sizeof(int));
    }

    matrix2 = (int **)malloc(r2 * sizeof(int *));
    for (i = 0; i < r2; i++) 
    {
        matrix2[i] = (int *)malloc(c2 * sizeof(int));
    }

    result = (int **)malloc(r1 * sizeof(int *));
    for (i = 0; i < r1; i++) 
    {
        result[i] = (int *)malloc(c2 * sizeof(int));
    }

    printf("\nEnter elements of first matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", *(matrix1 + i) + j);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", *(matrix2 + i) + j);
        }
    }

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            *(*(result + i) + j) = 0;
        }
    }

    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            for (k = 0; k < c1; k++) 
            {
                *(*(result + i) + j) += *(*(matrix1 + i) + k) * *(*(matrix2 + k) + j);
            }
        }
    }

    printf("\nFirst Matrix:\n");
    for (i = 0; i < r1; i++) 
    {
        for (j = 0; j < c1; j++) 
        {
            printf("%d\t", *(*(matrix1 + i) + j));
        }

        printf("\n");

    }

    printf("\nSecond Matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d\t", *(*(matrix2 + i) + j));
        }

        printf("\n");

    }

    printf("\nResultant Matrix:\n");
    for (i = 0; i < r2; i++) 
    {
        for (j = 0; j < c2; j++) 
        {
            printf("%d\t", *(*(result + i) + j));
        }

        printf("\n");

    }

}