#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ITEM
{
    char item_name[100];
    int Quantity;
    int price;
    int amount;
    
}Item;


int main()
{
    Item *strpt;
    Item items[50];

    int N;

    printf("Emter the No. of appliances: ");
    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        printf("Item [%d] name is: ", i+1);
        scanf(" %[^\n]s", items[i].item_name);

        printf("Item [%d] Quantity is: ", i+1);
        scanf("%d", &items[i].Quantity);

        printf("Item [%d] price is: ", i+1);
        scanf("%d", &items[i].price);

    }

    for (int i = 0; i < N; i++)
    {
        items[i].amount = items[i].price * items[i].Quantity;
    }
    
    int Total_amount;
    for (int i = 0; i < N; i++)
    {
        Total_amount += items[i].amount;
    }
    

    strpt = items;

    printf("\n----Item List----\n");

    for (int i = 0; i < N; i++)
    {
        printf("Item name is: %s\n", items[i].item_name);
        printf("Quantity: %d\n", items[i].Quantity);
        printf("price: %d\n", items[i].price);
        printf("Amount: %d\n\n", items[i].amount);
        printf("-----------------\n");

    }

    printf("Total amount = %d\n", Total_amount);
    printf("-----------------\n");
    return 0;
}