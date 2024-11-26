#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    printf("Enter the number of test cases: ");
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++) 
    {
        printf("Enter the number to be tested: ");
        int test_case;
        scanf("%d",&test_case);

        if(test_case==1) 
        {
            printf("Isfibo");
            continue;
        }

        int fibbo1 = 0;
        int fibbo2 = 1;
        int isfibbo = 0;

        while (test_case>fibbo1 && test_case>fibbo2)
        {
            fibbo2 = fibbo2 + fibbo1;
            if(test_case==fibbo2) 
                {
                    isfibbo = 1;
                    goto truth;
                }           
            fibbo1 = fibbo2 + fibbo1;
            
            if(test_case==fibbo1) 
                {
                    isfibbo = 1;
                    goto truth;
                }           
            }   
        truth:
        if(isfibbo) {
            printf("IsFibbo\n");
        } else {
            printf("Isnotfibbo\n");
        }
        
    }
    

    return 0;
}