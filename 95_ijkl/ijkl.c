/*
95. Write a program that, for all positive integers i, j , k, and l from 1 through 1000, finds and prints
all combinations of i, j , k, and I such that i + j + k = l and i < j < k < l.
*/

#include <stdio.h>

int main(void)
{
    printf("Numbers satisfying i + j + k = l and i < j < k < l are: \n");

    for (int i = 1 ; i <= 1000 ; i++)
    {
        for (int j = 1 ; j <= 1000 ; j++)
        {
            for (int k = 1 ; k <= 1000 ; k++)
            {
                for (int l = 1 ; l <= 1000 ; l++)
                {
                    if ( i + j + k == l && i < j && j < k && k < l)
                    {
                        printf("%d %d %d %d\n", i , j , k , l);
                    }
                }
            }
        }
    }
}