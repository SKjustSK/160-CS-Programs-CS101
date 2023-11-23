/*
48. Write a program to find the greatest of the three numbers entered through the keyboard using
conditional operators
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter numbers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
    printf("\n");
}