/*
68.
 
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
        for (int j = n - i ; j > 0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}