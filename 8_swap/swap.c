// Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of
// C and D.

#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("num 1: ");
    scanf("%d", &a);
    
    printf("num 2: ");
    scanf("%d", &b);

    int temp = a;
    a = b;
    b = temp;

    printf("num 1 is now %d\n", a);
    printf("num 2 is now %d\n", b);
}