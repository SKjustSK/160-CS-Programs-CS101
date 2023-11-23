/*
93. Write a program which to find the grace marks for a student using switch. The user should enter 
    the class obtained by the student and the number of subjects he has failed in.
   - If the student gets first class and the number of subjects he failed in is greater than 3,
    then he does not get any grace.If the number of subjects he failed in is less than or equal to 3 then
    the grace is of 5 marks per subject.
   - If the student gets second class and the number of subjects he failed in is greater than 2,
    then he does not get any grace. If the number of subjects he failed in is less than or equal to 2 then
    the grace is of 4 marks per subject.
   - If the student gets third class and the number of subjects he failed in is greater than 1,
    then he does not get any grace. If the number of subjects he failed in is equal to 1 then
    the grace is of 5 marks per subject 
*/

#include <stdio.h>

int main(void)
{
    unsigned int class, sub;
    printf("Enter class and subjects failed in: ");
    scanf("%u %u", &class, &sub);

    switch (class)
    {
        case 1: 
            if (sub > 3)
            {
                printf("No grace.");
            } 
            else
            {
                printf("Grace is: %d", sub*5);
            }
            break;

        case 2:
            if (sub > 2)
            {
                printf("No grace.");
            } 
            else
            {
                printf("Grace is: %d", sub*4);
            }
            break;

        case 3:
            if (sub > 1)
            {
                printf("No grace.");
            } 
            else
            {
                printf("Grace is: %d", sub*5);
            }
            break;

        default:
            printf("Invalid Input");
            return 1;
    }
    printf("\n");
}