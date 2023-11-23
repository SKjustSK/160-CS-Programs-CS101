// Find the absolute value of a number entered through the keyboard.Like if value 
// is -12.32 abs value is 12.32 and if value is -9 abs value is 9.

#include <stdio.h>

int main(void)
{
    float input;
    printf("Enter number: ");
    scanf("%f", &input);

    if (input < 0)
    {
        input = input*(-1);
    }

    printf("Absolute is %f\n", input);
}