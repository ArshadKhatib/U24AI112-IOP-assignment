#include<stdio.h>

int main()
{
    int matrix[3][3];
    int max[3];
    int min[3];
    int ult_max;
    int ult_min;

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
        max[i]= matrix[i][0]>matrix[i][1]?matrix[i][0]>matrix[i][2]:(matrix[i][1]>matrix[i][2]?matrix[i][1]:matrix[i][2]);
    }

    for (int i = 0; i < 3; i++)
    {
        min[i]= matrix[i][0]>matrix[i][1]?matrix[i][2]>matrix[i][1]:(matrix[i][2]>matrix[i][0]?matrix[i][0]:matrix[i][2]);
    }

    ult_max = max[0]>max[1]?max[0]>max[2]:(max[1]>max[2]?max[1]:max[2]);
    ult_min = min[0]>min[1]?min[2]>min[1]:(min[2]>min[0]?min[0]:min[2]);

    printf("The max Element of the Matrix is %d\n",ult_max);
    printf("The min Element of the Matrix is %d\n",ult_min);
    
    
    
}