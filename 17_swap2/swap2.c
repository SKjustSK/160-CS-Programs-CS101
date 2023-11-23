// Two variables a and b contain values 10 and 20. Write a program to interchange the ontents of a and b
// without using a third variable.

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;

    printf("%d,%d\n", a, b); 
    
    a = a + b; //a=30 (10+20)    
    b = a - b; //b=10 (30-20)    
    a = a - b; //a=20 (30-10)

    printf("%d,%d\n", a, b);    
}