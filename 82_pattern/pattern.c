/*
82.
i.e. if input is 7

   *
  ***
 *****
*******
 *****
  ***
   *
& if input is 8

   *
  ***
 *****
*******
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    int ph = n;
    if (ph % 2 != 0)
    {
        ph = ph / 2 + 1;
    }
    else
    {
        ph = ph / 2;
    }

    int i = 1;
    while (i <= ph)
    {
        int j = ph - i;
        while (j > 0)
        {
            printf(" ");
            j--;
        }
        int k = 1;
        while (k <= i)
        {
            printf("*");
            k++;
        }
        int l = 1;
        while (l <= i - 1)
        {
            printf("*");
            l++;
        }
        printf("\n");
        i++;
    }

    if (n % 2 == 0)
    {
        int k = 0;
        while (k < n - 1)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }

    i = 0;
    while (i < ph - 1)
    {
        int j = 0;
        while (j < i + 1)
        {
            printf(" ");
            j++;
        }
        int k = 0;
        while (k < ph - 1 - i)
        {
            printf("*");
            k++;
        }
        int l = 0;
        while (l < ph - 1 - i - 1)
        {
            printf("*");
            l++;
        }
        printf("\n");
        i++;
    }
}