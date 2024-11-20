#include<stdio.h>

int main()
{
    void Sqr_Cube();

    int N, sqr, cube;

    int *P = &N;

    printf("Enter the number whos sqr and cube is to be calculated: ");
    scanf("%d", P);

    Sqr_Cube(P, &sqr, &cube);

    printf("Sqr is %d \nCube is %d \n ", sqr, cube);

    return 0;
}

void Sqr_Cube(int *num, int *sqr, int *cube)
{
    *sqr = (*num) * (*num);
    *cube = (*num) * (*num) * (*num);
    
}
