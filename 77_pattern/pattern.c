/*
77.
   *
  **
 ***
****

*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        int j = n - i;
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
        printf("\n");
        i++;
    }
}