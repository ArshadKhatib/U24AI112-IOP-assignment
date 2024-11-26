#include<stdio.h>
#include<ctype.h>

int fact(int n);

int ncr(int N, int R);

int change_r(int z, int x);

int main()
{
    // int a=0 ,r=0;
    // printf("This program will can calculate nCr\n ");
    
    // printf("Enter the Value of n: ");
    // scanf("%d",&a);
    // printf("Enter the Value of r: ");
    // scanf("%d",&r);
    // while (a<r)
    // {
    //     printf("value of n cannot be less than r\n\n");
    //     printf("Please Enter the Value of n and r:\n");
    //     scanf("%d%d",&a,&r);
    // }
    // r = change_question(a,r);
    int z =5;
    if (z<7/2) {
        z = change_r(7,z);
    }
    int n = 1;
    for (int w=7;w>z;w--) {
        n *= w;
    }
    printf("%d",n/fact(change_r(7,z)));
    // printf("\n%d\n C    is %d\n  %d",a,ncr(a,r),r);
    // return 0;   

}

int change_r(int z, int x) {
        return z - x;
}


int ncr(int N, int R)
{
    int n = 1;
    for (int w=N;w>R;w--) {
        n *= w;
    }
    return n/fact(R);
}

int fact(int n)
{
   if(n==1)
    return 1; 
    return(n*fact(n-1));
   
}