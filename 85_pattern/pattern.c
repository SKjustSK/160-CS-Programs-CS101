/*
85. 
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

    int i = 1;
    while (i <= n)
    {
        printer(i);
        printf("\n");
        i++;
    }
}

void printer(int start)
{
    if (start % 2 == 0)
    {
        int b = 0;
        while (b < start)
        {
            if (b % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            b++;
        }
    }
    else
    {
        int b = 0;
        while (b < start)
        {
            if (b % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            b++;
        }
    }
}