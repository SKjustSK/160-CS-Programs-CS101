// Write a program to check whether a triangle is valid or not, when the three angles of the triangle
// are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 
// 180 degrees.

#include <stdio.h>

int main(void)
{
    int angle1;
    int angle2;
    int angle3;

    printf("Input angles in degrees!!\n");
    
    printf("Angle 1: ");
    scanf("%i", &angle1);

    printf("Angle 2: ");
    scanf("%i", &angle2);

    printf("Angle 3: ");
    scanf("%i", &angle3);

    if (angle1 + angle2 + angle3 == 180)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    printf("\n");
}