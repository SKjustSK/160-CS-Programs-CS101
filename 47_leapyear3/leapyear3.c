/*
47. Write a program using conditional operators to determine whether a year entered through the keyboard is a 
leap year or not.
*/

#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a year: ");
    scanf("%i", &input);

    if (input % 4 == 0)
    {
        printf("%d is a leap year", input);
    }
    else
    {
        printf("%d is not a leap year", input);
    }
    printf("\n");
}