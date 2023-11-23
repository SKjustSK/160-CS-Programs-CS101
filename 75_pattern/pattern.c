/*
75. 
0
10
010
1010
*/

#include <stdio.h>

void printer(int start);

int main(void)
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++ )
    {
        printer(i);
        printf("\n");
    }
}

void printer(int start)
{
    if (start % 2 == 0)
    {
        for (int b = 0 ; b < start ; b++)
        {
            if (b % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
    else
    {
        for (int b = 0 ; b < start ; b++)
        {
            if (b % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
    }
}