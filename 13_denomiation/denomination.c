// A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the 
// keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to
// the withdrawer.

#include <stdio.h>

int main(void)
{
    int num;
    printf("Entera amount to be withdrawn: ");
    scanf("%d", &num);

    int den100;
    int den50;
    int den10;

    den100 = num / 100;
    num = num - den100 * 100;

    den50 = num / 50;
    num = num - den50 * 50;

    den10 = num / 10;
    num = num - den10 * 10;

    printf("100 note : %d\n50 note: %d\n10 note: %d\n", den100, den50, den10);
}