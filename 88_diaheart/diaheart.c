/*
88. Write a program to fill the entire screen with diamond and heart alternatively. The ASCII 
value for heart is 3 and that of diamond is 4.
*/

#include <stdio.h>

int main(void)
{
    for (int i = 0 ; i < 5000 ; i++)
    {
        if (i % 2 == 0)
        {
            printf("%s", "\u25C6");
        }
        else
        {
            printf("%s", "\u2665");
        }
    }
}