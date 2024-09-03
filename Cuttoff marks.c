//Program for calculation of cutoff marks


#include<stdio.h>
int main()
{
    printf("Cutoff marks calculator\n\n");

    float M,P,C,E,CM,T;

    printf("Enter Your Maths marks(out of 200) \n");
    scanf("%f",&M);

    printf("Enter Your Physics marks(out of 200) \n");
    scanf("%f",&P);

    printf("Enter Your Chemistry marks(out of 200) \n");
    scanf("%f",&C);

    printf("Enter Your Entrance exam marks(Out of 100) \n");
    scanf("%f",&E);

    CM= M/2 +P/2 +C/2 +E;

    T=M+P+C+E;

    printf("\nYour cutoff marks are- %f\n\n",CM);

    printf("Your total marks are- %f/700 \n\n",T);

    sleep(15);

    return 0;

}
