/*
97. Write a program which finds a four digit number AABB which is a perfect square. A and B represent
different digits.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    for (int a = 1 ; a < 10 ; a++)
    {
        for (int b = 0 ; b < 10 ; b++)
        {
            int num = a*1000 + a*100+ b*10 + b;

            if ( (double) ( (int) sqrt(num)) == sqrt(num) )
            {
                printf("%d\n", num);
            }
        }
    }
}