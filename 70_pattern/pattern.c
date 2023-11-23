/*
70.
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

    for (int i = 1 ; i <= ph ; i++ )
    {
        for (int j = 1 ; j <= i ; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
    if (n % 2 == 0)
    {
        for (int k = 0 ; k < n/2 ; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0 ; i < ph-1 ; i++)
    {
        for (int j = ph-1 - i ; j > 0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
