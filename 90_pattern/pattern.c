/*
90. Write a program to produce the following output where number of line entered by keyboard:

   1
  2 3
 4 5 6
7 8 9 10
*/

#include <stdio.h>

int counter = 1;

void printer(int x);

int main(void)
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 0 ; j < n - i ; j++)
        {
            printf(" ");
        }
        printer(i);
        printf("\n");
    }
}

void printer(int x)
{
    for (int i = 0 ; i < x ; i++)
    {
        printf("%d ", counter);
        counter++;
    }
}