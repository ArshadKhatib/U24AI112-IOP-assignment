#include <stdio.h>
#include <conio.h>
//This program will print Fibonacci series
int main()
{
    printf("1,1,2,3,5.....(n terms)\n");
    int n,a=1,b=1,c=0;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    printf("1,1,");
    for(int i=1; i<=n-2; i++){
        c = a+b;
        printf("%d", c);
        a=b;
        b=c;
        if(i!=n-2){
            printf(",");
        }
    }
    getch();
    return 0;
}