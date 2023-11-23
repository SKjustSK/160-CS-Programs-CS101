/*
111. Write a program to copy the contents of one array into another in the reverse order.
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Number of input: ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &num[i]);
    }

    int reverse[n];

    for (int i = 0 ; i < n ; i++)
    {
        reverse[i] = num[n - i - 1];
    }

    for (int i = 0 ; i < n ; i++)
    {
        printf("%d ", reverse[i]);
    }
    printf("\n");
}
