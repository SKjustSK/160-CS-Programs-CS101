/*
41. If the three sides of a triangle are entered through the keyboard, write a program to check 
whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater
than the largest of the three sides. 
*/

#include <stdio.h>

int main(void)
{
    int side1;
    int side2;
    int side3;

    printf("Input sides:\n");
    
    printf("Side 1: ");
    scanf("%i", &side1);

    printf("Side 2: ");
    scanf("%i", &side2);

    printf("Side 3: ");
    scanf("%i", &side3);

    if (side1 > side2 + side3)
    {
        printf("Invalid Triangle.");
    }
    else if (side2 > side1 + side3)
    {
        printf("Invalid Triangle.");
    }
    else if (side3 > side1 + side2)
    {
        printf("Invalid Triangle.");
    }
    else
    {
        printf("Valid Triangle.");
    }
    printf("\n");
}