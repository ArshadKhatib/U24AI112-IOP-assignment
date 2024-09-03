//Program to Calculate the Gross Salary of an Employ

#include<stdio.h>

int main()
{
    int S,I,L,P,O,E,G,N; //All essential parameters declared

    printf("Income and savings Analysis \n\n");

    printf("Enter your annual salary- "); //Declaring income
    scanf("%d",&S);

    //Declaring all the Cuts

    printf("Income Tax (In %)- ");
    scanf("%d",&I);

    printf("Loan Installment  (annual)- ");
    scanf("%d",&L);

    printf("Cut for Provident Fund- ");
    scanf("%d",&P);

    printf("Enter your Other Cuts- ");
    scanf("%d",&O);

    printf("Your Yearly personal Expenses- ");
    scanf("%d",&E);

    G=((S-(S/100*I))-L-P-O); //Formula for calculation of Gross income

    N= G-E; //Formula for calculation of Net savings

    printf("\n");

    printf("Your Gross Salary is- %d \n",G);
    printf("Your Net Savings is- %d \n",N);

    sleep(30);


    return 0;
}
