/*
46. Using conditional operators determine:
(1) Whether the character entered through the keyboard is a lower case alphabet or not.
(2) Whether a character entered through the keyboard is a special symbol or not
*/

#include <stdio.h>

int main(void)
{
    char input;
    scanf("%c", &input);
    
    if (input >= 65 && input <= 90)
    {
        printf("Not small/special character");
    }
    else if (input >= 97 && input <= 122)
    {
        printf("Small letter");
    }
    else if (input >= 48 && input <= 57)
    {
        printf("Not small/special character");
    }
    else
    {
        printf("Special symbol");
    }
    printf("\n");
}