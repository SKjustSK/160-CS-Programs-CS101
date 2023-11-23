/*
102. Write a program to add or subtract 2 3*3 int array where choice is asked from user.
*/

#include <stdio.h>

int main(void)
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];

    printf("Mattrix 1 - Matrix 2 = Matrix 3\nMatrix 1: \n");
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Matrix 2: \n");
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }     

    printf("Matrix 3: \n");
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }  
    printf("\n");
}