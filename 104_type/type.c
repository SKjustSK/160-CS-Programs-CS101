/*
104. Twenty-five numbers are entered from the keyboard into an array. Write a program to find out
how many of them are positive, how many are negative, how many are even and how many odd.
*/

#include <stdio.h>

int main(void)
{
    int n = 25;
    int nums[n];
    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            positive++;
        }
        if (nums[i] < 0)
        {
            negative++;
        }
        if (nums[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Positives: %d\nNegaties: %d\nEven: %d\nOdd: %d\n", positive, negative, even, odd);
}