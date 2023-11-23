/*
103. Twenty-five numbers are entered from the keyboard into an array. The number to be searched 
is entered through the keyboard by the user. Write a program to find if the number to be searched is
present in the array and if it is present, display the number of times it appears in the array.
*/

#include <stdio.h>

int main(void)
{
    int n = 25;
    int nums[n];
    printf("Enter %d numbers: \n", n);
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &nums[i]);
    }

    int num;
    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    int counter = 0;

    for (int i = 0 ; i < n ; i++)
    {
        if (num == nums[i])
        {
            counter++;
        }
    }
    printf("Your number %d, was found %d times.\n", num, counter);
}