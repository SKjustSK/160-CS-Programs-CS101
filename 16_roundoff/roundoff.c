// Write a program to round off an integer i to the next largest multiple of another integer j . 
// For example, 256 days when rounded off to the next largest multiple divisible by a week results into 259.

#include <stdio.h>

int main(void)
{
    int num;
    printf("Integer: ");
    scanf("%d", &num);

    int another_num;
    printf("Inetger whose multiple to round off to: ");
    scanf("%d", &another_num);

    float compare = (float) num / (float) another_num;
    int ph = num / another_num;
    
    int before = (ph-1)*another_num;
    int after = (ph+1)*another_num;

    if (ph != compare)
    {
        if (num - before > after - num)
        {
            printf("%d", after);
        }
        else if (num - before < after - num)
        {
            printf("%d", before);
        }
    }
    else
    {
        printf("%d", num);
    }
    printf("\n");
}