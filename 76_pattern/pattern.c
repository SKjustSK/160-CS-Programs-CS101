/*
76. 
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
        for (int j = 1 ; j <= i ; j++ )
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
}