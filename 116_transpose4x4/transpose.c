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
            printf("\n");
        }
    }

    int transpose[row][column];
    // Exchange
    for (int i = 0 ; i < row ; i++ )
    {
        for (int j = 0 ; j < column ; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    // TEST
    for (int i = 0 ; i < row ; i++ )
    {
        for (int j = 0 ; j < column ; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}