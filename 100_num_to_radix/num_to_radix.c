/*
100. A positive integer is entered through the keyboard. Alongwith it the base of the numbering system
in which you want to convert this number is entered. Write a program to display the number entered, the base, 
and the converted number. (Hint: Number conversion)
*/

#include <stdio.h>

int main(void)
{
    unsigned int dec_num, radix;
    printf("Enter a decimal number and the radix to convert it to: ");
    scanf("%u %u", &dec_num, &radix);

    // Array to store alphabets for higher radix
    int storage = radix - 9;
    char alphabet[storage];
    for (int i = 0 ; i < storage ; i++)
    {
        alphabet[i] = 65 + i;
    }

    int ph = dec_num;
    int count = 0;

    // Will give us the size of array for remainders
    while (ph != 0)
    {
        ph = ph / radix;
        count++;
    }
    // Resetting value of ph
    ph = dec_num;
    int remainder[count];
    int i = count - 1; // To arrange remainders in MSB to LSB format, index 0 will have MSB
    // Getting the converted number
    while (ph != 0)
    {
        remainder[i] = ph % radix;
        ph = ph / radix;
        i--;
    }
    // Printing converted number
    for (int j = 0 ; j < count ; j++)
    {
        if (remainder[j] < 10)
        {
            printf("%d", remainder[j]);
        }
        // 36 is the maximum radix, as 26 + 9 alphabets + numbers available to represent numbers
        else if (remainder[j] < 36)
        {
            printf("%c", alphabet[remainder[j] - 10]);
        }
    }
    printf("\n");
}