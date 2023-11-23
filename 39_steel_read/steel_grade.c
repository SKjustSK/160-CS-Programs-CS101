/*
39. A certain grade of steel is graded according to the following conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength
of the steel under consideration and output the grade of the steel.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float hardness, carbon, tensile;
    printf("Enter Hardness, Carbon content, and Tenshile strength:\n");
    scanf("%f", &hardness);
    scanf("%f", &carbon);
    scanf("%f", &tensile);

    bool i = (hardness > 50); 
    bool ii = (carbon < 0.7);
    bool iii = (tensile > 5600);

    if (i && ii && iii)
    {
        printf("Grade 10");
    }
    else if (i && ii)
    {
        printf("Grade 9");
    }
    else if (ii && iii)
    {
        printf("Grade 8");
    }
    else if (i && iii)
    {
        printf("Grade 7");
    }
    else if (i || ii || iii)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }
    printf("\n");
}