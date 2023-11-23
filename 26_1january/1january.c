// 26. According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through 
// the keyboard write a program to find out what is the day on 1st January of this year.
/* 
Monday 1900
Tuesday 1901
Wednesday 1902
Thursday 1903
Friday 1904
Sunday 1905
Mon 1906
Tue 1907
Wed 1908
Fri 1909
*/ 

#include <stdio.h>

int main(void)
{
    // 1 jan 0001 is Saturday
    // Day 0 -> Saturday
    // Day 6 -> Friday
    char* day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    unsigned int year;
    printf("Enter year (above 1900): ");
    scanf("%u", &year);
    
    int current_day = 0;
    int start = 1902;

    // 1900
    if (year == 1900)
    {
        printf("%s\n", day[current_day]);
        return 1;
    }
    // 1901
    current_day = 1;
    if (year == 1901)
    {
        printf("%s\n", day[current_day]);
        return 1;
    }
    // 1902 onwards
    while (start <= year)
    {   
        // Increment for a year, which is not after a leap year
        if ((start - 1) % 4 != 0)
        {
            current_day++;
        }
        // Increment for a year, which is after a leap year
        else
        {
            current_day = current_day + 2; 
        }

        // Cycling Days
        // Cycles back to SATURDAY 
        if (current_day == 7)
        {
            current_day = 0;
        }
        // Cycles back to SUNDAY whenever 6 + 2 occurs because of leap year
        else if (current_day == 8)
        {
            current_day = 1;
        }

        start++;
    }
    printf("%s\n", day[current_day]);
}