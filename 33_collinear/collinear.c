// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the
// three points fall on one straight line.
// y = mx + C here m is slope and can be calculated (Change in Y) / (Change in X).

#include <stdio.h>

int main(void)
{
    float x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates in the format x1 y1 x2 y2 x3 y3 : ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    float m1 = (y2 - y1) / (x2 - x1);
    float m2 = (y3 - y2) / (x3 - x2);

    if (m1 == m2)
    {
        printf("Collinear points.");
    }
    else
    {
        printf("Not collinear points");
    }
    printf("\n");
}