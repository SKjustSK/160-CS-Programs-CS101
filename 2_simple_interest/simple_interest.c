// Calculate simple interest

#include <stdio.h>

int main(void)
{
    float intrate, years, amount;

    printf("Starting amount of money: ");
    scanf("%f", &amount);

    printf("Interest rate (in %%): ");
    scanf("%f", &intrate);

    printf("Time (in years): ");
    scanf("%f", &years);

    float si = amount* years*(intrate/100); // Simple interest formula

    amount = amount + si;

    printf("End amount with interest is %f\n", amount);
}