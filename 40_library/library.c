/*
40. A library charges a fine for every book returned late. For first 5 days the fine is 50 paise per day, for 
6-10 days fine is one rupee per day and above 10 days fine is 5 rupees per day. If you return
the book after 30 days your membership will be cancelled. Write a program to accept the number of days the
member is late to return the book and display the fine or the appropriate message.
*/

#include <stdio.h>

int main(void)
{
    int days;
    scanf("%d", &days);

    float fine = 0;
    int counter;

    for (counter = 1; counter <= days; counter++)
    {
        if (counter <= 5)
        {
            fine = fine + 0.5;
        }
        else if (counter <= 10)
        {
            fine = fine + 5;
        }
        else
        {
            fine = fine + 10;
        }
    }

    if (days > 30)
    {
        printf("Membership Cancelled\n");
    }

    printf("%f\n", fine);
}


