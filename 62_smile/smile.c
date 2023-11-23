/*
62. Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.
*/

#include <stdio.h>

int main(void)
{
    int i = 0;
    while(i < 6000)
    {
        printf("%s", "\u263A");
        i++;
    }
}