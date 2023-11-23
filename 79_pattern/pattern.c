/*
79.

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

    int i = 0 ;
    while (i < n)
    {
        int j = i;
        while (j > 0)
        {
            printf(" ");
            j--;
        }
        int k = n - i;
        while (k > 0)
        {
            printf("*");
            k--;
        }
        printf("\n");
        i++;
    }
}
