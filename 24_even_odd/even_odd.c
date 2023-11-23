// Program to check if number is even or odd
#include <stdio.h>

int main(void)
{
    int input;
    printf("Enter a number: ");
    scanf("%i", &input);

    if (input % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    printf("\n");
}