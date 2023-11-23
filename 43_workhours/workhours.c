/*
43. In a company, worker efficiency is determined on the basis of the time required for a worker to complete
a particular job. If the time taken by the worker is between 2 – 3 hours, then the worker is
said to be highly efficient. If the time required by the worker is between 3 – 4 hours, then the worker
is ordered to improve speed. If the time taken is between 4 – 5 hours, the worker is given training to 
improve his speed, and if the time taken by the worker is more than 5 hours, then the worker has to leave
the company. If the time taken by the worker is input through the keyboard, find the efficiency of the worker.
*/

#include <stdio.h>

int main(void)
{
    int hours;
    printf("Time taken to complete work: ");
    scanf("%d", &hours);

    if (hours <= 3)
    {
        printf("Highly Effecient.");
    }
    else if (hours <= 4)
    {
        printf("Improve Speed.");
    }
    else if (hours <= 5)
    {
        printf("Needs Training");
    }
    else
    {
        printf("FIRED!");
    }
    printf("\n");
}