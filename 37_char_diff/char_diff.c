// Any character is entered through the keyboard, write a program to determine whether the
// character entered is a capital letter, a small case letter, a digit or a special symbol.

#include <stdio.h>

int main(void)
{
    char input;
    scanf("%c", &input);
    
    if (input >= 65 && input <= 90)
    {
        printf("Captial Letter");
    }
    else if (input >= 97 && input <= 122)
    {
        printf("Small letter");
    }
    else if (input >= 48 && input <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special symbol");
    }
    printf("\n");
}