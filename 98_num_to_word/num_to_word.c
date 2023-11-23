/*
98. If a number 972 is entered through the keyboard, your program should print "Nine Seven Two". 
Write the program such that it does this for any positive integer.
*/

#include <stdio.h>

int main(void)
{
    char* name[] = { "Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" };

    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int ph = num;
    int length = 0;
    while (ph != 0)
    {
        ph = ph / 10;
        length++;
    }

    int digit[length];
    ph = num;
    // Stores like 0 -> MSB to length-1 -> LSB
    for (int i = length - 1 ; i >= 0 ; i--)
    {
        digit[i] = ph % 10;
        ph = ph / 10; 
    }

    for (int i = 0 ; i < length ; i++)
    {
        for (int x = 0 ; x < 10 ; x++)
        {
            if (digit[i] == x)
            {
                printf("%s ", name[x]);
            }
        }
    }

    printf("\n");
}