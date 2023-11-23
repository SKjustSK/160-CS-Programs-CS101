// If a five-digit number is input through the keyboard, write a program to reverse the number.

#include <stdio.h>

int exponent(int base, int power);

int main(void)
{
    int num_digits = 5;

    int num;
    printf("Enter a %d digit number: ", num_digits);
    scanf("%d", &num);
    
    int digit[num_digits];
    
    // stores and prints digits
    printf("Reverse is: ");
    for (int i = 0; i < num_digits; i++)
    {
        digit[i] = (num % exponent(10, i + 1)) / exponent(10, i);
        printf("%d", digit[i]);
    }
    printf("\n");

    // Checks if reverse is equal to original number
    int equal = 0;
    int j = 0;
    for (int i = num_digits - 1; i >= 0; i--)
    {
        if (digit[i] == (num % exponent(10, j + 1)) / exponent(10, j))
        {
            equal = 1;
        }
        else
        {
            equal = 0;
            break;
        }
        j++;
    }
    if (equal == 1)
    {
        printf("EQUAL WHEN REVERSED.");
    }
    else
    {
        printf("NOT EQUAL WHEN REVERSED.");
    }

    printf("\n");
}

int exponent(int base, int power)
{
    int ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans = base * ans;
    }
    return ans;
}