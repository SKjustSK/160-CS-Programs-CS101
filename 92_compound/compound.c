/*

92. When interest compounds q times per year at an annual rate of r % for n years, the principle p 
compounds to an amount a as per the following formula

a = p( 1 + r / q )^^nq   //where ^^ is power

Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
*/

#include <stdio.h>

float power(float base, float topow);

int main(void)
{
    int row = 10;
    int column = 4;

    float number[row][column];

    printf("Enter %d sets of values of p r n and q in format (p r n q): \n", row);
    for (int r = 0 ; r < row ; r++)
    {
        printf("Set %d: ", r + 1);
        for (int c = 0; c < column ; c++)
        {
            scanf("%f", &number[r][c]);
        }
    }

    float amount[row];
    for (int r = 0 ; r < row ; r++)
    {
        // a = p( 1 + r / q )^^nq 
        int x = (1 + (number[r][1] / number[r][2]));
        int y = number[r][3] * number[r][2] ;
        amount[r] = number[r][0] * power(x , y);
    }

    for (int r = 0 ; r < row ; r++)
    {
        printf("Amount %d: %f\n", r+1, amount[r]);
    }
}


float power(float base, float topow)
{
    float prod = 1;
    for (int i = 0 ; i < topow ; i++)
    {
        prod = base*prod;
    }
    return prod;
}