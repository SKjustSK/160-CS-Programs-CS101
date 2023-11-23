// If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program 
// to determine the youngest of the three.

#include <stdio.h>

int main(void)
{
    int ram;
    int shyam;
    int ajay;

    printf("Ram's age: ");
    scanf("%i", &ram);

    printf("Shyam's age: ");
    scanf("%i", &shyam);

    printf("Ajay's age: ");
    scanf("%i", &ajay);

    // Determines smallest age
    int smallest = ram;
    if (smallest > shyam)
    {
        smallest = shyam;
    }
    if (smallest > ajay)
    {
        smallest = ajay;
    }
    
    // Determines who the age belongs to
    if (smallest == ram && smallest == shyam && smallest == ajay)
    {
        printf("All are of equal ages");
    }
    else if (smallest == ram)
    {
        printf("Ram");
    }
    else if (smallest == shyam)
    {
        printf("Shyam");
    }
    else 
    {
        printf("Ajay");
    }

    printf("\n");
}