/*
84.
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

    int i = 0;
    while (i < ph)
    {
        int j = 0 ;
        while ( j < ph - i - 1 )
        {
            printf(" ");
            j++;
        }
        int k = 0 ;
        while ( k < 2*i + 1)
        {
            counter(a);
            k++;
        }
        printf("\n");
        i++;
    }
    
    if (n % 2 == 0)
    {
        int b = 0;
        while (b < n-1)
        {
            counter(a);
            b++;
        }
        printf("\n");
    }

    int ph2 = n;
    if (ph2 % 2 == 0)
    {
        ph2 = ph2-1;
    }

    i = 0;
    while (i < ph - 1)
    {
        int j = 0;
        while (j < i + 1 )
        {
            printf(" ");
            j++;
        }
        int k = 0;
        while (k < ph2-2 - 2*i )
        {
            counter(a);
            k++;
        }
        printf("\n");
        i++;
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