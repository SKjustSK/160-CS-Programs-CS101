/*
102. write a programm to multiply 2 3*3 matrics.
*/

#include <stdio.h>

int main(void)
{
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    for (int i = 0 ; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            mat3[i][j] = 0;
        }
    }

    printf("Mattrix 1 * Matrix 2 = Matrix 3\nMatrix 1: \n");
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
            for (int k = 0 ; k < 3 ; k++)
            {
                mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];
            }
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }  
    printf("\n");
}