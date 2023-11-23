/*
94. let the equation x + y = r represents a circle with centre at origin and radius r. Write 
a program that reads r from the keyboard and prints the number of points with integer coordinates 
that lie within the circle.
*/

#include <stdio.h>

float power(float base, float topow);

int main(void)
{
    int r;
    printf("Radius of circle at origin: ");
    scanf("%d", &r);

    printf("Integer Points WITHIN the circle are: \n");
    for (int x = -r ; x < r ; x++)
    {
        for (int y = -r ; y < r ; y++)
        {
            if (power(x , 2) + power(y , 2) < power(r , 2))
            {
                printf("(%d, %d)\n", x, y);
            }
        }
    }
}


float power(float base, float topow)
{
    float prod = 1;
    for (int i = 0 ; i < topow ; i++)
    {
        prod = base*prod;
    }
    return prod;
}