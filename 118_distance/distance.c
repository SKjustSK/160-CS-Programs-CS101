/* 
118. The X and Y coordinates of 10 different points are entered through the keyboard. Write a program to find
the distance of last point from the first point (sum of distance between consecutive points).
*/

#include <stdio.h>
#include <math.h>

#define TOTAL_INPUTS 10

typedef struct point
{
    double x;
    double y;
}
point;

double square(double x);
double dist(point *xy);

int main(void)
{
    point input[TOTAL_INPUTS];
    for (int i = 0 ; i < TOTAL_INPUTS ; i++)
    {
        printf("Enter X and Y point (%d): ", i+1);
        scanf("%lf %lf", &input[i].x , &input[i].y);
    }

    double totalDistance = dist(input);

    printf("Distance between first and last point is: %lf\n", totalDistance);
}

double dist(point *xy)
{
    double sum = 0;
    for (int i = 1 ; i < TOTAL_INPUTS ; i++)
    {
        sum = sum + sqrt(square(xy[i-1].x - xy[i].x) + square(xy[i-1].y - xy[i].y)); 
    }
    return sum;
}

double square(double x)
{
    return x*x;
}

