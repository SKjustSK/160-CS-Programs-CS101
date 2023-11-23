/*
63. Write a program to add first seven terms of the following series using a for loop:

1     2     3
-  +  -  +  - ......
1!    2!    3!
*/

#include <stdio.h>

double factorial(double num);

int main(void)
{
    double sum = 0;
    for (double i = 1; i <= 7 ; i++)
    {
        sum = sum + i/factorial(i);
    }
    printf("%f\n", sum);
}

double factorial(double num)
{
    double ans = 1;
    for (double i = 1 ; i <= num ; i++)
    {
        ans = ans*i;
    }
    return ans;
}