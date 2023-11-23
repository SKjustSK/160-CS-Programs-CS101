/* 
42. If the three sides of a triangle are entered through the keyboard, write a program to check
whether the triangle is isosceles, equilateral, scalene or right angled triangle.
*/

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    printf("Input sides:\n");
    
    printf("Side 1: ");
    scanf("%i", &a);

    printf("Side 2: ");
    scanf("%i", &b);

    printf("Side 3: ");
    scanf("%i", &c);

    if (a == b && b == c)
    {
        printf("Equilateral.");
    }
    else if (a != b && b != c)
    {
        printf("Scalene");
    }
    else
    {
        printf("Isosceles");
    }
    printf("\n");
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        printf("Right Angled");
    }
    printf("\n");
}