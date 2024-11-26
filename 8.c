#include<stdio.h>

int main()
{
    int H, M, S, P=31558150;

    printf("Earth's Period of revolution");

    H= P%3600;
    M= (P-(H*3600))%60;
    S= (P-(H*3600)-(M*60));

    printf("\n\nThe period of Revolution in Hours, minutes, seconds is %d%d%d", H, M, S);


    return 0;


}
