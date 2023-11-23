/*
61. Write a program to print all prime numbers from 1 to 300. (Use nested loops, break and continue)
*/

#include <stdio.h>

int main(void)
{

    printf("1\n2\n");
    for (int num = 3 ; num <= 300 ; num++)
    {
        int prime_check = 0;
        for (int i = 2 ; i < num ; i++)
        {
            if (num % i == 0)
            {
                prime_check = 0;
                break;
            }
            else 
            {
                prime_check = 1;
                continue;
            }
        }

        if (prime_check == 1)
        {
            printf("%d\n", num);
        }
    }
}