/*
72.
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
        ph = ph/2 + 1;
    }
    else
    {
        ph = ph/2;
    }

    for (int i = 1 ; i <= ph ; i++)
    {
        for (int j = ph - i ; j > 0 ; j--)
        {
            printf(" ");
        }
        for (int k = 1 ; k <= i ; k++)
        {
            printf("*");
        }
        for (int l = 1 ; l <= i-1 ; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    if (n % 2 == 0)
    {
        for (int a = 0 ; a < n-1 ; a++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0 ; i < ph-1 ; i++)
    {
        for (int j = 0 ; j < i+1 ; j++)
        {
            printf(" ");
        }
        for (int k = 0 ; k < ph-1 - i ; k++ )
        {
            printf("*");
        }
        for (int l = 0 ; l < ph-1 - i-1 ; l++)
        {
            printf("*");
        }
        printf("\n");
    }
}