/* 50. A number is entered through the keyboard. The number may contain 1,2,3,4, or 5 digits.
Write a program to find the number of digits in the number.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[5];
    scanf("%[^\n]s", num);
    int digits = strlen(num);
    printf("There are %d digits\n", digits);
}