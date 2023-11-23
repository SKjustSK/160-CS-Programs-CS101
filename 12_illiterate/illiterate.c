// In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men 
// is 35 of the total population, write a program to find the total number of illiterate men and women if the population 
// of the town is 80,000.

// After some math, illiterate men = 17% women = 35%

#include <stdio.h>

int main(void)
{
    int illmen = (17* 80000) / 100;
    int illwomen = (35* 80000) /100; 
    printf("80,000 population, %d (17%%) illiterate men, %d (35%%) illiterate women\n.", illmen, illwomen);
}

