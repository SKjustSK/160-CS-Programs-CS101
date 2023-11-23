/*
113. Find the smallest number in an array using pointers.
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

    int *smallest = &num[0];
    for (int i = 0 ; i < n ; i++)
    {
        if (*smallest > num[i])
        {
            smallest = &num[i];
        }
    }

    printf("Smallest number in the array is: %d\n", *smallest);
}