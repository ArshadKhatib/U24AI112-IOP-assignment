#include<stdio.h>
int main()
{
    int num, digi, tnum, pof10, i, j, re;

    printf("Enter a number ");
    scanf("%d",&num);

    do
    {
        pof10 = 1;
        for(j=0;i>=j;j++)
        {
            pof10 = pof10*10;
        }
        tnum = num/10;
        digi = num%pof10;
        num = num-digi;
        digi=digi*10;
        digi=digi/pof10;
        re= re+digi;
        i++;
        if(tnum==0){
        break;
        }

    } while (i<10);
    printf("Sum of digits of given no. is %d",re);
    
    return 0;
    
}