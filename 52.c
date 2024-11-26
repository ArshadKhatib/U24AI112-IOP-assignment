#include <stdio.h>

int main() {
    int n,a,m;
    printf("Enter the no till which you want the eq triangle of no.s: ");
    scanf("%d",&n);
    n++;
    a = n;
    for(int i=0;i<n;i++) {
        a--;
        m = 1;
        for (int k=a;k>0;k--) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            printf("%d",m);
            m++;
        }
        m = i;
        m--;
        for(int j=1;j<i;j++) {
            printf("%d",m);
            m--;
        }
        printf("\n");
    }

    return 0;
    return 0;
}