/*
107. Write a programm to implement Bubble Sort. 
*/

/*
Pseudo Code:
1) While swaps is not zero
    (a) Select ith term in array
        if ith term is smaller than ith + 1 term
            return to (a) with increment i+1
        if ith term is larger than ith + 1 term
            swap ith and ith + 1 term
            swap counter++
            return to (a) with increment i + 1
*/

#include <stdio.h>

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

    // Bubble Sort
    int swaps = 1;
    while (swaps != 0)
    {
        swaps = 0;
        for (int current_term = 0 ; current_term < total_terms ; current_term++)
        {
            if (current_term + 1 == total_terms)
            {
                break;
            }
            if (number[current_term] <= number[current_term + 1])
            {
                continue;
            }
            else
            {
                int temp = number[current_term];
                number[current_term] = number[current_term + 1];
                number[current_term + 1] = temp;
                swaps++;
            }
        }
    }

    for (int i = 0 ; i < total_terms ; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
}