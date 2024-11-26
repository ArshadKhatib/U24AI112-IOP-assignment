#include <stdio.h>

int main() {
    int p,i,j,a,m;
    printf("This is 10000\n 01000\n 00100\n 00010\n 00001\n pattern program");
    printf("Enter how many times you want this pattern to be displyed: ");
    scanf("%d",&p);
    m = 0;
    for(i=0;i<p;i++) {
        for(j=0;j<p;j++) {
            if(m==j){
                printf("1");    
            } else {
                printf("0");
            }
        }
        m++;
        printf("\n");
    }
    return 0;
}