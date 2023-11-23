// 58. Write a program to enter the numbers till the user wants and at the end it should display the count
// of positive, negative and zeros entered.

#include <stdio.h>

int main(void)
{
    int n;
    printf("How many numbers do you want to input?: ");
    scanf("%d", &n);

    int num[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &num[i]);
    }

    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;

    for (int i = 0 ; i < n ; i++)
    {
        if (num[i] > 0)
        {
            pos_count++;
        }
        else if (num[i] < 0)
        {
            neg_count++;
        }
        else
        {
            zero_count++;
        }
    }

    printf("Positive numbers: %d\nNegative numbers: %d\nZeros: %d\n", pos_count, neg_count, zero_count);
}