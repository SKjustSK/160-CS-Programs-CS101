/*
71.
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

    for (int i = 1 ; i <= ph ; i++)
    {
        for (int j = ph - i; j > 0 ; j--)
        {
            printf(" ");
        }
        for (int k = 1 ; k <= i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    if (n % 2 == 0)
    {
        for (int a = 0 ; a < n/2 ; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0 ; i < ph-1; i++)
    {
        for (int j = i+1 ; j > 0 ; j--)
        {
            printf(" ");
        }
        for (int k = ph-1 - i ; k > 0 ; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}