#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee
    {
        int Employee_Num;
        int Basic_Pay;
        char E_name[50];

    }Employee;


int main()
{
    Employee *strpt;
    Employee Employ[50];

    int N;

    printf("Emter the Number of employee: ");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("Employee num of Employee[%d] is: ", i+1);
        scanf("%d", &Employ[i].Employee_Num);

        printf("Employee name of Employee[%d] is: ", i+1);
        scanf(" %[^\n]s", Employ[i].E_name);

        printf("Basic Pay of Employee[%d] is: ", i+1);
        scanf("%d", &Employ[i].Basic_Pay);

    }

    strpt = Employ;

    printf("\n----Employee Detailes----\n");

    for (int i = 0; i < N; i++)
    {
        printf("Employ Number: %d\n", strpt[i].Employee_Num);
        printf("Employ Name: %s\n", strpt[i].E_name);
        printf("Basic pay: %d\n\n", strpt[i].Basic_Pay);

    }
    
    return 0;
}