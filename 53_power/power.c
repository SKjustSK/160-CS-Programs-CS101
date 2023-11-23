/*
53. Two numbers are entered through the keyboard. Write a program to find the value of one number
raised to the power of another.
*/

#include <stdio.h>

int powe(int base, int power);

int main(void)
{
    int base, power;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("To the power: ");
    scanf("%d", &power);

    printf("%d\n", powe(base, power));
}

int powe(int base, int power)
{
    int ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans = ans*base;
    }
    return ans;
}