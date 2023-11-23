// Write a program to show bits of integer. ex. for input 2 output will be 0000000000000010 and for -1 1111111111111111.


// Come to this later


#include <stdio.h>

long int exponent(long int base, long int power);

int main(void)
{
    int input;
    printf("Enter number: ");
    scanf("%d", &input);

    int remainder[16];
    // positive
    if (input >= 0) 
    {
        int ph_num = input; 
        // Decimal to Binary Converter
        int i = 0; 
        while(ph_num != 0)
        {
            remainder[i] = ph_num % 2;
            ph_num = ph_num / 2;
            i++;
        }

        // Assigns unused space with zeroes
        for (int a = i; a < 16; a++)
        {
            remainder[a] = 0;
        }

        for (int i = 15; i >= 0; i--)
        {
            printf("%d", remainder[i]);
        }
        printf("\n");
    }
    // negative
    else
    {
        int ph_num = input * (-1); 
        // Decimal to Binary Converter
        int i = 0; 
        while(ph_num != 0)
        {
            remainder[i] = ph_num % 2;
            ph_num = ph_num / 2;
            i++;
        }

        // Assigns unused space with zeroes
        for (int a = i; a < 16; a++)
        {
            remainder[a] = 0;
        }
        // Replace 0 with 1, 1 with 0
        for (int b = 0; b < 16; b++)
        {
            if (remainder[b] == 0)
            {
                remainder[b] == 1;
            }
            else if (remainder[b] == 1)
            {
                remainder[b] == 0;
            }
            else
            {
                continue;
            }
        }
        for (int i = 15; i >= 0; i--)
        {
            printf("%d", remainder[i]);
        }
        printf("\n");
        // Will convert into a proper number
        // long int binary = 0;
        // for (int c = 0; c < 16; c++)
        // {
        //     binary = binary + (long int) remainder[c]*exponent(10, 15 - c);
        // }
        // printf("%ld\n", binary);

    }
}

long int exponent(long int base, long int power)
{
    long int ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans = base * ans;
    }
    return ans;
}