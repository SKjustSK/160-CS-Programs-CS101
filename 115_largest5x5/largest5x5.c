/*
115. Write a program to pick up the largest matrixber from any 5 row by 5 column matrix.
*/

#include <stdio.h>

int main(void)
{
    int n = 5;
    printf("Input 5 x 5 matrix: \n");
    int matrix[5][5];
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int *largest= &matrix[0][0];
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n ; j++)
        {
            if (*largest < matrix[i][j])
            {
                largest = &matrix[i][j];
            }
        }
    }   
    printf("Largest element in the 5x5 matrix is: %d\n", *largest);
}