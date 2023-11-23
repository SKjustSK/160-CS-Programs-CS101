/*
87.Write a program to produce the following pattaran:

*******
 *****
  ***
   *
  ***
 *****
*******
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

    for (int i = 0 ; i < ph ; i++)
    {
        for (int j = 0 ; j < i ; j++)
        {
            printf(" ");
        }
        for (int k = n - 2*i; k > 0 ; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0 ; i < ph - 1; i++)
    {
        for (int j = ph-2 - i ; j > 0 ; j--)
        {
            printf(" ");
        }
        for (int k = 0 ; k < 3 + 2*i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}