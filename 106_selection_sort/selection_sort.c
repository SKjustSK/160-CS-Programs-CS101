/*
106. Write a programm to implement Selection Sort.
*/

/*
1) Sort the numbers that are input
Pseudo Code:
    (a) Select ith num
        Compare ith num with all other num ahead of it
            if ith num smallest
                return to process (a) with i+1 increment
            if jth num smallest
                swap ith and jth terms
                return to process (a) with i+1 increment
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // Taking Input
    int total_terms;
    printf("How many numbers to input?: ");
    scanf("%d", &total_terms);

    int number[total_terms];
    printf("Enter your numbers: ");
    for (int i = 0; i < total_terms; i++)
    {
        scanf("%d", &number[i]);
    }

    // Selection Sort
    for (int current_term = 0; current_term < total_terms; current_term++)
    {
        int smallest_term = current_term;
        for (int other_term = current_term + 1; other_term < total_terms; other_term++)
        {
            if (number[smallest_term] <= number[other_term])
            {
                continue;
            }
            else if (number[smallest_term] > number[other_term])
            {
                smallest_term = other_term;
            }
        }
        // Swap
        int temp = number[current_term];
        number[current_term] = number[smallest_term];
        number[smallest_term] = temp;
    }

    printf("Sorted numbers: ");
    for (int i = 0 ; i < total_terms ; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
}
