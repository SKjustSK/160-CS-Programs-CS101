// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. 
// (Hint: Use the modulus operator ‘%’)

#include <stdio.h>

int exponent(int base, int power);

int main(void)
{
    int num_digits = 5;

    int num;
    printf("Entera a %d digit number: ", num_digits);
    scanf("%d", &num);

    int digit[num_digits];
    
    int sum = 0;

    for (int i = 0; i < num_digits; i++)
    {
        digit[i] = (num % exponent(10, i + 1)) / exponent(10, i);
        sum = sum + digit[i];
    }
    
    printf("Sum of digits is %d\n", sum);
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