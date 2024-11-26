//Program for calculation of area of Triangle

#include<stdio.h>

int main()
{
    float H,B,Area; //Declaring essential variables

    printf("Area of Triangle Calculator\n\n");

    printf("Enter the height of Triangle- "); //Height of Triangle
    scanf("%f",&H);

    printf("Enter the base of Triangle- "); //Base of Triangle
    scanf("%f",&B);

    printf("\n\n");

    Area = (H*B)/2; //Formula for Area of Triangle

    printf("Area of triangle is- %f",Area);

    sleep(10);

    return 0;

}




