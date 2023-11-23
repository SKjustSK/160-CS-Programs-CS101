// If the total selling price of 15 items and the total profit earned on them is input through the keyboard, 
// write a program to find the cost price of one item.

#include <stdio.h>

int main(void)
{
    int sell;
    printf("Enter selling price (15 items): ");
    scanf("%d", &sell);
    
    int profit;
    printf("Enter profit (15 items): ");
    scanf("%d", &profit);

    int single_cost = (sell - profit)/15;

    printf("Cost price of single item: %d\n", single_cost);
}
