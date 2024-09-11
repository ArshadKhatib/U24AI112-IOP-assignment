#include <stdio.h>
#include <conio.h>
//This program will calculate the rate of charge for consumption per unit
int main()
{
    printf("If units are (0-200), rupees 0.5 per unit\n");    //For user understanding
    printf("If units are (201-400), rupees 100 + rupees 0.65 per unit excess of 200\n");
    printf("If units are (401-600), rupees 230 + rupees 0.80 per unit excess of 400\n");
    printf("If units are (600+), rupees 425 + rupees 1.25 per unit excess of 600\n");
    double units, rupees;
    printf("Please enter your consumption(in units): ");  //For input of sales
    scanf("%lf", &units);
    for(int i = 0; units < 0; i++) // Loop if user enters a negative integer
    { 
        printf("Please enter a positive integer: ");
        scanf("%lf", &units);
    }
    if(units<=200) //Calculation, conditions of commission and output
    {
        rupees=(units*0.5);
        printf("The total rate of charge is %0.2lf", rupees);
    }
    else if(units>200 && units<=400)
    {
        units-=200;
        rupees=100+(units*0.65);
        printf("The total rate of charge is %0.2lf", rupees);
    }
    else if(units>400 && units<=600)
    {
        units-=400;
        rupees=230+(units*0.80);
        printf("The total rate of charge is %0.2lf", rupees);
    }
    else
    {
        units-=600;
        rupees=425+(units*1.25);
        printf("The total rate of charge is %0.2lf", rupees);
    }
    getch();
    return 0;
}