/*
81.
i.e. if input is 7

   *
  **
 ***
****
 ***
  **
   *

& if input is 8

   *
  **
 ***
****
****
 ***
  **
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
        ph = ph/2 + 1;
    }
    else
    {
        ph = ph/2;
    }

    int i = 1;
    while (i <= ph)
    {
        int j = ph - i;
        while ( j > 0 )
        {
            printf(" ");
            j--;
        }
        int k = 1;
        while ( k <= i )
        {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }

    if (n % 2 == 0)
    {
        int k = 0;
        while (k < n/2)
        {
            printf("*");
            k++;
        }
        printf("\n");
    }

    i = 0; 
    while (i < ph-1)
    {
        int j = i+1;
        while ( j > 0 )
        {
            printf(" ");
            j--;
        }
        int k = ph-1 - i;
        while ( k > 0)
        {
            printf("*");
            k--;
        }
        printf("\n");
        i++;
    }
}