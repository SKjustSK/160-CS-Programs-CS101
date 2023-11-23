// Write a program to find out how many days and how many weeks have passed between the dates 01/01/92 to 31/05/92. 
// Also find out how many days could not get evened out into weeks.

// As it is the same year, no need to factor in years. FEB will have 29 days cause leap year

#include <stdio.h>

int main(void)
{
    int day1 = 1, day2 = 31;
    int month1 = 1, month2 = 5;

    int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};

    int daysum = month[month1 - 1] - day1 + day2; 

    for (int i = month1 - 1 + 1; i < month2 - 1; i++)
    {
        daysum = daysum + month[i]; 
    } 

    printf("%d days have passed.\n", daysum);
}
