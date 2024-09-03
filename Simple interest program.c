//Program to calculate simple interest


#include<stdio.h>
int main(){

int principal, rate, time,f,z;  //All essential parameters decleared

    printf("Enter your principal amount: "); //Declaring principal amount
    scanf("%d", &principal);

    printf("Enter the rate of interest: "); //Declaring the rate of Interest
    scanf("%d", &rate);

    printf("Enter the period of investment (In years): "); //Declaring the period of investment
    scanf("%d", &time);

z = (rate*principal*time)/100; //Declaring the Formula for calculation of simple interest

printf("The Interest on your investment will be- %d",z); //Display of Interest
printf("\n");

f=principal+z; //Calculation of total amount after interest

printf("The value of your total investment would be- %d", f); //Display of the total value of investment
printf("\n");

sleep(30);

return 0;
}
