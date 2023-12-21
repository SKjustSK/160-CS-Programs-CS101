// 116. Write a program to obtain transpose of a 4 x 4 matrix. The transpose of a matrix is obtained by exchanging the 
// elements of each row with the elements of the corresponding column.

#include <stdio.h>

int main(void)
{
    int row = 3;
    int column = 3;
    int matrix[row][column];

    for (int i = 0 ; i < row ; i++ )
    {
        for (int j = 0 ; j < column ; j++)
        {
            printf("Enter element a%d%d:", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");

    // Copying matrix to normal array
    int total_terms = row*column; // For selection sort code to work
    int number[row*column];
    int n = 0;
    for (int i = 0; i < row; i++ )
    {
        for(int j = 0; j < column ; j++)
        {
            number[n] = matrix[i][j];
            n++;
        }
    }

    // Selection Sort
    for (int current_term = 0; current_term < total_terms; current_term++)
    {
        int smallest_term = current_term;
        for (int other_term = current_term + 1; other_term < total_terms; other_term++)
        {
            if (number[smallest_term] <= number[other_term])
            {
                continue;
            }
            else if (number[smallest_term] > number[other_term])
            {
                smallest_term = other_term;
            }
        }
        // Swap
        int temp = number[current_term];
        number[current_term] = number[smallest_term];
        number[smallest_term] = temp;
    }

    // Converting sorted array back to matrix
    n = 0;
    for (int i = 0; i < row; i++ )
    {
        for(int j = 0; j < column ; j++)
        {
            matrix[i][j] = number[n];
            n++;
        }
    }

    // Print Matrix
    for (int i = 0 ; i < row ; i++ )
    {
        for (int j = 0 ; j < column ; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}