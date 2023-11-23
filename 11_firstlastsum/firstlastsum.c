// If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last
// digit of this number.

#include <stdio.h>

int exponent(int base, int power);

int main(void)
{
    int num_digits = 4;

    int num;
    printf("Entera a %d digit number: ", num_digits);
    scanf("%d", &num);
    
    int digit[num_digits];
    
    // stores digits
    for (int i = 0; i < num_digits; i++)
    {
        digit[i] = (num % exponent(10, i + 1)) / exponent(10, i);
    }

    int sum = digit[0] + digit[num_digits - 1];

    printf("Sum of first and last digit is: %d\n", sum);
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