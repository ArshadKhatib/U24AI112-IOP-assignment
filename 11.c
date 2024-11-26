//Convert Total Seconds to Time

#include<stdio.h>
int main()
{
    int H, M, S, T;

    printf("converting Total Seconds to time\n\n");

    printf("Enter the Total no of seconds- \n");
    scanf("%d",&T);

    H=T/3600;
    M=(T-(H*3600))/60;
    S=(T-(H*3600)-(M*60));

    printf("\n\nTime is %d Hr %d Mins %d secs\n\n", H, M, S);

    return 0;

}
