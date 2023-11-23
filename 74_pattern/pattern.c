/*
74.
i.e. if input is 5
  1
 234
56789
 012
  3

& if input is 6
  1
 234
56789
01234
 567
  8
*/

#include <stdio.h>

void counter(int a);

int a = 1;

int main(void)
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    
    int ph = n;
    if (ph % 2 == 0)
    {
        ph = ph/2;
    }
    else
    {
        ph = ph/2 + 1;
    }

    for (int i = 0 ; i < ph ; i++)
    {
        for (int j = 0 ; j < ph - i - 1 ; j++)
        {
            printf(" ");
        }
        for (int k = 0 ; k < 2*i + 1 ; k++)
        {
            counter(a);
        }
        printf("\n");
    }
    
    if (n % 2 == 0)
    {
        for (int b = 0 ; b < n-1 ; b++)
        {
            counter(a);
        }
        printf("\n");
    }

    int ph2 = n;
    if (ph2 % 2 == 0)
    {
        ph2 = ph2-1;
    }

    for (int i = 0 ; i < ph -1 ; i++)
    {
        for (int j = 0 ; j < i + 1 ; j++)
        {
            printf(" ");
        }
        for (int k = 0 ; k < ph2-2 - 2*i  ; k++)
        {
            counter(a);
        }
        printf("\n");
    }
}

void counter(int x)
{
    if (x > 9)
    {
        x = 0;
        printf("%d", x);
        x++;
    }
    else
    {
        printf("%d", x);
        x++;
    }
    a = x;
}