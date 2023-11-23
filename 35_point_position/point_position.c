// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at
// the origin, viz. (0, 0).

#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Input Point Coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y ==0)
    {
        printf("Origin");
    }
    else if (x == 0)
    {
        printf("Lies on Y axis");
    }
    else if (y == 0)
    {
        printf("Lies on X axis");
    }
    else
    {
        printf("Not on X or Y axis");
    }
    printf("\n");
}