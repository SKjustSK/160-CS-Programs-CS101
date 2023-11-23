/*
112. If an array arr contains n elements, then write a program to check if 
arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Number of input: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i++)
    {
        if (arr[i] == arr[n - i - 1])
        {
            printf("arr[%d] is equal to arr[%d].", i, n - i - 1);
        }
        else
        {
            printf("arr[%d] is NOT equal to arr[%d].", i, n - i - 1);
        }
        printf("\n");
    }
}