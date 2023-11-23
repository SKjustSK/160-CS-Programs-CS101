/*
83.
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
    int i = 0;
    while (i < n)
    {
        int j = 0 ; 
        while (j < n - i)
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
            j++;
        }
        printf("\n");
        i++;
    }
}