/*
96. Write a program which finds four digit perfect squares where the number represented by
the first two digits and the number represented by the last two digits are also perfect squares.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int from = 1000;
    int to = 9999;

    for (int i = from ; i <= to ; i++)
    {
        int sqrt4 = 0;
        int sqrt1 = 0;
        int sqrt2 = 0;

        if ( (double) ( (int) sqrt(i)) != sqrt(i) )
        {
            sqrt4 = 0;
        }
        else
        {
            sqrt4 = 1;
        }

        if ( (double) ( (int) sqrt(i/100)) != sqrt(i/100) )
        {
            sqrt1 = 0;
        }
        else
        {
            sqrt1 = 1;
        }

        if ( (double) ( (int) sqrt(i % 100)) != sqrt(i % 100) )
        {
            sqrt2 = 0;
        }
        else
        {
            sqrt2 = 1;
        }

        if (sqrt1 + sqrt2 + sqrt4 == 3)
        {
            printf("%d\n", i);
        }
    }
}