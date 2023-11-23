// Program that outputs the greatest number between 3 inputs
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;

    printf("First Number: ");
    scanf("%i", &num1);

    printf("Second Number: ");
    scanf("%i", &num2);

    printf("Third Number: ");
    scanf("%i", &num3);

    int greatest = num1;

    if (greatest < num2)
    {
        greatest = num2;
    }
    if (greatest < num3)
    {
        greatest = num3;
    }
    
    printf("Greatest number is %i\n", greatest);
}