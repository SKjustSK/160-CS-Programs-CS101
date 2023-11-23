/*
45. The policy followed by a company to process customer orders is given by the following rules:
(a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
(b) If has credit is not OK do not supply. Send him intimation.
(c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him 
data the balance will be shipped.

Write a C program to implement the company policy.
*/

#include <stdio.h>

int main(void)
{
    char user_credit;
    int orders;
    int item_stock;

    printf("User credit (g = good, b = bad): ");
    scanf("%c", &user_credit);

    printf("Number of orders: ");
    scanf("%d", &orders);

    printf("Item Stock: ");
    scanf("%d", &item_stock);

    if (user_credit != 'g')
    {
        printf("Bad Credit.");
    }
    else if (item_stock >= orders)
    {
        printf("Shipping Order.");
    }
    else
    {
        printf("Shipping %d items, not enough stock right now.", item_stock);
    }
    printf("\n");
}