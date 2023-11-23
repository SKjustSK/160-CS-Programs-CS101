// If cost price and selling price of an item is input through the keyboard, write a program to determine whether 
// the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

#include <stdio.h>

int main(void)
{
    int sell;
    printf("Enter selling price: ");
    scanf("%d", &sell);
    
    int cost;
    printf("Enter cost price: ");
    scanf("%d", &cost);

    int profit = sell - cost;

    if (profit < 0)
    {
        printf("Loss of %d", (-1)*profit);
    }
    else
    {
        printf("Profit of %d", profit);
    }
    printf("\n");
}