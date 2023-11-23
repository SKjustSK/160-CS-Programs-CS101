/*
51. Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate
of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional
part of an hour.
*/

#include <stdio.h>

int main(void)
{
    int empl[10];
    int rate = 12;
    int overtime_pay = 0;
    int hours[10];

    printf("Hours worked: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Employee %d: ", i + 1);
        scanf("%d", &hours[i]);
        if (hours[i] > 40)
        {
            hours[i] = hours[i] - 40;
            overtime_pay = hours[i] * rate;
        }
        printf("Overtime pay is %d for employee %d\n", overtime_pay, i + 1);
    }
}