/*
52. Write a program to find the factorial value of any number entered through the keyboard.
*/

#include <stdio.h>

int factorial(int number);

int main(void)
{
    int input;
    do
    {
        printf("Enter number: ");
        scanf("%d", &input);
    }
    while (input < 1);

    printf("%d\n", factorial(input));
}

int factorial(int number)
{
    if (number > 1)
    {
        number = number * factorial(number-1);
    }
    return number;
}
