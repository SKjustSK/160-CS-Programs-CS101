/*
108. Write a programm to implement Insertion sort.
*/
/*
Pesudo Code:
1) Insertion Sort
(a) Select ith term in array
    if ith term smaller than ith + 1
        no swap
        repeat (a) with i++
    else if ith term bigger than ith + 1
        (b) swap both
            if (ith - 1 < 0)
                reset ith term to the 'ith' in step (a)
                continue
            if ith - 1 term is smaller than ith term
                no swap
                repeat (a) with i++ increment
            else if ith - 1 term is bigger than ith term
                repeat (b) until i is equal to zero, with decrement everytime
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

    // Insertion Sort
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

            for (int swapper_term = current_term; swapper_term > 0 ; swapper_term--)
            {
                if (swapper_term - 1 < 0)
                {
                    break;
                }
                if (number[swapper_term] >= number[swapper_term - 1])
                {
                    break;
                }
                else
                {
                    int temp2 = number[swapper_term];
                    number[swapper_term] = number[swapper_term - 1];
                    number[swapper_term - 1] = temp2;
                }
            }
        }
    }

    for (int i = 0 ; i < total_terms ; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
}