#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,max1,max2,i;
    max1 = -32000;
    max2 = -32000;
    i = 0;
    printf("Enter a series of numbers and we will tell the first maximum and second minimum values.\n");
   while  (i < 25)  {
   i++;
   printf("Enter the numbers : \n");
   scanf("%d",&n);
   if (max1>=n) {
         max1 = max1;
        if (max2>=n) {
             max2 = max2;
         } else {
         max2 = n;
         }
   } else {
         max2 = max1;
         max1 = n;      
   }
   printf("first maximum = %d\n",max1);
   printf("second maximum = %d\n",max2);
   }
   return 0;
}