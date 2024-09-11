#include <stdio.h>
#include <conio.h>
//This program will calculate the commission in sales
int main()
{
    printf("If sales<=Rs.500, commission is 5%%\n");    //For user understanding
    printf("If sales>500 but <=2000, commission is Rs.35 plus 10%% above Rs.500\n");
    printf("If sales>2000 but <=5000, commission is Rs.185 plus 12%% above Rs.2000\n");
    printf("If sales>5000, commission is 12.5%%\n");
    double sales, commission;
    printf("Please enter your sales(in rupees): ");  //For input of sales
    scanf("%lf", &sales);
    for(int i = 0; sales < 0; i++) // Loop if user enters a negative integer
    { 
        printf("Please enter a positive number: ");
        scanf("%lf", &sales);
    }
    if(sales<=500) //Calculation, conditions of commission and output
    {
        commission=(sales/20);
        printf("The commission is %0.2lf", commission);
    }
    else if(sales>500 && sales<=2000)
    {
        sales-=500;
        commission=35+(sales/10);
        printf("The commission is %0.2lf", commission);
    }
    else if(sales>2000 && sales<=5000)
    {
        sales-=2000;
        commission=185+((sales*3)/25);
        printf("The commission is %0.2lf", commission);
    }
    else
    {
        commission=(sales/8);
        printf("The commission is %0.2lf", commission);
    }
    getch();
    return 0;
}