// The information about colors is to be stored in bits of a char variable called color. The bit number 0 to 6,
// each represent 7 colors of a rainbow, i.e. bit 0 represents violet, 1 represents indigo, and so on as given below. 
// Write a program that asks the user to enter a number and based on this number it reports which colors in the rainbow 
// does the number represents.

// Red Orange Yellow Green Blue Indigo	Violet

#include <stdio.h>

int main(void)
{
    int input;
    printf("Input: ");
    scanf("%d", &input);

    switch (input)
    {
        case 0 :
            printf("Violet");
            break;
        case 1 :
            printf("Indigo");
            break;
        case 2 :
            printf("Blue");
            break;
        case 3 :
            printf("Green");
            break;
        case 4 :
            printf("Yellow");
            break;
        case 5 :
            printf("Orange");
            break;
        case 6 :
            printf("Red");
            break;
        default :
            break;
    }
    printf("\n");
}