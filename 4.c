#include<stdio.h>

int main()

{
    float C,F;

    printf("Enter the Temperature in Fahrenheit- ");
    scanf("%f",&F);

    printf("\n\n");

    C=((F-32)*5)/9;

    printf("The Temperature in Celsius is- %f",C);

    return 0;

}
