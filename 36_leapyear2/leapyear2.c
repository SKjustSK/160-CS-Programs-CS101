// Any year is entered through the keyboard, write a program to determine whether the year is
// leap or not. Use the logical operators && and ||.

#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a year: ");
    scanf("%i", &input);

    if ((input % 4 && 1) == 0)
    {
        printf("%d is a leap year", input);
    }
    else if ((input % 4 || 0 == 1))
    {
        printf("%d is not a leap year", input);
    }
    printf("\n");
}