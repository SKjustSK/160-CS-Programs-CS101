// If the marks obtained by a student in five different subjects are input through the keyboard, 
// find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum 
// marks that can be obtained by a student in each subject is 100.

#include <stdio.h>

// Number of subjects

int main(void)
{
    // Will record and find aggregate marks and percentage
    float sub[5];
    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Marks in subject %i: ", (i + 1) );
            scanf("%f", &sub[i]);
        }
        while (sub[i] > 100);
    }

    float aggregate = 0;
    for (int i = 0; i < 5; i++)
    {
        aggregate = aggregate + sub[i];
    }

    float percent = aggregate/5;

    printf("Aggregate marks: %f\n", aggregate);
    printf("Percentage: %f%%\n", percent);
}


