// If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each
// of its digits. For example if the number that is input is 12391 then the output should be displayed as 23402.

#include <stdio.h>

// If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. 
// (Hint: Use the modulus operator ‘%’)

#include <stdio.h>

int exponent(int base, int power);

int main(void)
{
    int num_digits = 5;

    int num;
    printf("Enter a %d digit number: ", num_digits);
    scanf("%d", &num);

    int digit[num_digits];

    for (int i = 0; i < num_digits; i++)
    {
        digit[i] = (num % exponent(10, i + 1)) / exponent(10, i);
        digit[i]++;
    }

    printf("New number: ");
    for (int i = num_digits - 1; i >= 0; i--)
    {
        printf("%d", digit[i]);
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