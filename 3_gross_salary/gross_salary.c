// Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, 
// and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.

// Assuming gross salary means the next amount Ramesh is left with and not the actual definition.

// "Basic salary is the amount agreed upon by an employer and employee excluding overtime or any other extra 
// compensation. Gross salary, on the other hand, is the amount paid before tax or other deductions but includes 
// overtime pay and bonuses."

#include <stdio.h>

int main(void)
{
    float basic;

    printf("Basic Salary: ");
    scanf("%f", &basic);

    // 40% to dearness, 20% to house rent, therefore 40% left
    float gross = basic*(0.4);

    printf("Ramesh is left with %f gross salary\n", gross);
}