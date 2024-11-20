#include<stdio.h>
#include<string.h>


int main()
{
    void spaces();


    int SE = 0 , SI = 0;
    char B[100];

    int N=1;

    while (N !=0 )
    {

        printf("\nPress 1 to start\nPress 0 to exit\n ");
        scanf("%d",&N);
        getchar();

        if (N == 1)
        {
            printf("Enter you sentence:");
            fgets(B, sizeof(B), stdin);

            spaces(B, &SE, &SI);

            printf("\nThe sentence is: %s\n",B);
            printf("Len of your sent including spaces = %d\n", SI-1);
            printf("Len of your sent excluding spaces = %d\n",SE-1);
        }
        else if (N ==0)
        {
            printf("Code exit");
            break;
        }
        else
        {
            printf("Code exit");
            break;
        }

        
    }

    return 0;

}
   
void spaces(char *A, int *SE, int *SI)
{
    char *P = A;
    *SE =0;
    *SI =0;

    while (*P != '\0')
    {
        *SI += 1;

        if (*P != ' ')
        {
            *SE += 1;
        }

        P++;
        
    }
    
}


