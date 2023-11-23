/*
101. Write a programm to store marks of 10 students in array, find average.
*/

#include <stdio.h>

int main(void)
{
    int marks[10];
    printf("Enter marks: \n");
    
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int sum = 0;
    for (int i = 0 ; i < 10 ; i++)
    {
        sum = sum + marks[i];
    }
    int avg = sum / 10;

    printf("Average is : %d\n", avg);
}