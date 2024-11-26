//filling jars
#include<stdio.h>
int main()
{
    int m=0,n=0,sum=0,i,j;
    printf("enter number of jars do you have");
    scanf("%d",&n);
    printf("enter number of operation you want to perform");
    scanf("%d",&m);
    int c[n],a[m],b[m],k[m];
    for(i=0;i<m;i++)
    {
        a[i]=0;
        b[i]=0;
        k[i]=0;
    }

    for(i=0;i<n;i++)
    {
        c[i] = 0;
    }

    for(i=0;i<m;i++)
    {
        printf("enter k for  %dth op.:",i+1);
        scanf("%d",&k[i]); 
        printf("enter value of a[%d]",i);
        scanf("%d",&a[i]);
        printf("enter value of b[%d]",i);
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<m;i++)
    {
        for(j=a[i];j<=b[i];j++)
        {
            c[j-1]+=k[i]; 
        }
    }
    for(int i=0 ;i<n;i++)
    {
        printf("%d \n",c[i]);
    }  

    for (int i = 0; i < n; i++)
    {
        sum += c[i];
    }
    
    printf("The  avg nos of candies are %d", sum/n);
    
    return 0;
}