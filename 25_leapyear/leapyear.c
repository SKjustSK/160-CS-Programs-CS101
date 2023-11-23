// Program determines if it is a leap year or not
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