/*
73.
12345
6789
012
34
5
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    int a = 1;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i ; j++)
        {
            if (a > 9)
            {
                a = 0;
                printf("%d", a);
                a++;
            }
            else
            {
                printf("%d", a);
                a++;
            }
        }
        printf("\n");
    }
}