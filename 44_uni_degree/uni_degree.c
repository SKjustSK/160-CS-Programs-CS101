/*
44. A university has the following rules for a student to qualify for a degree with A as the main subject and
B as the subsidiary subject:
(a) He should get 55 percent or more in A and 45 percent or more in B.
(b) If he gets less than 55 percent in A he should get 55 percent or more in B. However, he should get at 
least 45 percent in A.
(c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in
an examination in B to qualify.
(d) In all other cases he is declared to have failed.
*/

#include <stdio.h>

int main(void)
{
    int A, B;
    printf("Input percentage in A and B: ");
    scanf("%d %d", &A, &B);

    if (A >= 65 && B >= 45)
    {
        printf("Pass");
    }
    else if (45 <= A && A <= 55 && B >= 55)
    {
        printf("Pass");
    }
    else if (A >= 65 && B <= 45)
    {
        printf("Reappear in exam for B");
    }
    else
    {
        printf("Fail");
    }
    printf("\n");
}