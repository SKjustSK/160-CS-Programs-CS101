/*
60. write a program to find the range of a set of numbers. Range is the difference between the smallest
 and biggest number in the list.
*/


#include <stdio.h>

int main(void)
{
    int n;
    printf("How many numbers do you want to input?: ");
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Bubble Sort
    int swaps = 1;
    while (swaps != 0)
    {
        swaps = 0;
        for (int i = 0 ; i < n ; i++)
        {
            // To prevent comparing last value in array with some random garbage value
            if (i + 1 == n)
            {
                break;
            }
            // Swapping Algorithm
            if (numbers[i] <= numbers[i+1])
            {
                continue;
            }
            else if (numbers[i] > numbers[i+1])
            {
                int temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
                swaps++;
            }
        }
    }
    
    // Range
    printf("Range is: %d - %d = %d\n", numbers[n - 1], numbers[0], numbers[n - 1] - numbers[0]);
}