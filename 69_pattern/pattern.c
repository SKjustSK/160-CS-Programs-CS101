/*
69.

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

    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i ; j > 0 ; j--)
        {
            printf(" ");
        }
        for (int k = n - i ; k > 0 ; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
