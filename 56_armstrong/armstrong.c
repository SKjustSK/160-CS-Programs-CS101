/*
56. Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit 
of the number is equal to the number itself, then the number is called an Armstrong number.
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/

#include <stdio.h>

int main(void)
{
    for (int num = 1; num <= 500 ; num++)
    {
        int digit[3];
        int j = 0;
        int ph = num;
        while (ph != 0)
        {
            digit[j] = ph % 10;
            ph = ph/10; 
            j++;
        }

        int sum = 0;
        for (int k = 0; k < j ; k++)
        {
            sum = sum + digit[k]*digit[k]*digit[k];
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }
}
