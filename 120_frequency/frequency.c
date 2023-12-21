/*
120. A common problem in statistics is that of generating frequency distribution of the given data. 
Assuming that the data consists of 50 positive integers in the range 1 to 25, write a program that prints
the number of times each integer occurs in the data. 
*/

#include <stdio.h>
#include <stdlib.h>

#define TOTAL_DATA 50
#define TOTAL_RANGE 25

int main()
{
    int numData[TOTAL_DATA];
    printf("Enter numbers: ");
    for (int i = 0 ; i < TOTAL_DATA; i++)
    {
        scanf("%d", &numData[i]);
    }

    int occurence[TOTAL_RANGE + 1]; // I wont use zeroth position of array because its more conivnient
    
    for (int i = 0 ; i < TOTAL_RANGE ; i++)
    {
        occurence[i] = 0;
    }
    occurence[numData[0]] = 1;

    for (int i = 1 ; i < TOTAL_DATA ; i++)
    {
        int occured = 0; // 0 -> false, 1 -> true
        for (int j = 0 ; j < i ; j++)
        {      
            if (numData[i] != numData[j])
            {
                occured = 0;
            }
            else
            {
                occured = 1;
                break;
            }
        }
        
        if (occured == 0)
        {
            occurence[numData[i]] = 1;   
        }
        else
        {
            occurence[numData[i]]++;
        }
    }

    for (int i = 1 ; i <= TOTAL_RANGE ; i++)
    {
        if (occurence[i] != 0)
        {
            printf("%d has occured %d times.\n", i , occurence[i]);
        }
    }
    printf("All other numbers have occured 0 times.\n");
}