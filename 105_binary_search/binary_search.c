/*
105. Write a programm to implement binary search.
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

2) Binary Search
Pseudo Code:
    (b) Select middle term in sorted array
        if num to search is equal to middle term
            Number found, end program
        if num to search is smaller
            do (b) for the left side
        if num to search is larger
            do (b) for the right side
        else
            number not found
*/

#include <stdio.h>
#include <stdbool.h>

bool binary_search(int min, int max, int number[], int search);

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

    int search;
    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    // Binary Search
    bool finding = binary_search(0, total_terms, number, search);

    if (finding == true)
    {
        printf("%d was found in the numbers!", search);
    }
    else
    {
        printf("%d was not found in the numbers.", search);
    }
    printf("\n");
}


bool binary_search(int min, int max, int number[], int search)
{
    int middle_term = (min + max) / 2;

    if (number[middle_term] == search)
    {
        return true;
    }
    if (min != middle_term && max != middle_term)
    {
        if (search < number[middle_term])
        {
            return binary_search(min, middle_term, number, search);
        }
        else if (search > number[middle_term])
        {
            return binary_search(middle_term, max, number, search);
        }
    }
    return false;
}