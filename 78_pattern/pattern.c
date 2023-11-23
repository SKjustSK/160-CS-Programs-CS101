/*
78.
 
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
    int i = 0;
    while (i < n)
    {
        int j = n - i;
        while (j > 0)
        {
            printf("*");
            j--;
        }
        printf("\n");
        i++;
    }
}