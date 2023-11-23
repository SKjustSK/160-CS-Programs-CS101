/*
49. write a program to decide division of a student as following rules.
(1) There are 5 paper in each semester
(2) Maximum marks may vary for each paper
(3) if below then 40% for any two paper result is fail.
(4) if below then 40% for any paper result paper due.
(5) if total % below 33% result fail.
(6) if total % between 33% to 45% result third division.
(7) if total % between 45% to 60% result second division.
(8) if total % between 60% to 70% result first division.
(9) if total % above 70% result PASS WITH HONS.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int sub[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &sub[i]);
    }

    int counter3 = 0;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + sub[i];
    }
    int avg = sum / 5;

    for (int i = 0; i < 5; i++)
    {
        if (sub[i] < 40)
        {
            counter3++;
        }
    }

    if (avg < 33)
    {
        printf("Fail.\n");
    }
    else if (counter3 == 2)
    {
        printf("Fail.\n");
        return 0;
    }
    else if (counter3 == 1)
    {
        printf("Paper due.\n");
    }
    else if (33 <= avg && avg < 45)
    {
        printf("Third Division\n");
    }
    else if (45 <= avg && avg < 60)
    {
        printf("Second Division\n");
    }
    else if (60 <= avg && avg < 70)
    {
        printf("First Division\n");
    }
    else
    {
        printf("PASS WITH HONS.");
    }
}