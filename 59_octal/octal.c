// 59. Write a program to find the octal equivalent of the entered decimal number.

#include <stdio.h>

int main(void)
{
    int dec_num;
    printf("Enter a decimal number: ");
    scanf("%d", &dec_num);

    int ph = dec_num;
    int count = 0;

    // Will give us the size of array for remainders
    while (ph != 0)
    {
        ph = ph / 8;
        count++;
    }
    // Resetting value of ph
    ph = dec_num;
    int remainder[count];
    int i = count - 1; // To arrange remainders in MSB to LSB format, index 0 will have MSB
    // Getting the octal Number
    while (ph != 0)
    {
        remainder[i] = ph % 8;
        ph = ph / 8;
        i--;
    }
    // Printing Octal Number
    for (int j = 0 ; j < count ; j++)
    {
        printf("%d", remainder[j]);
    }
    printf("\n");
}