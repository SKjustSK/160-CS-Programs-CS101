/*
57. Write a program for a matchstick game being played between the computer and a user. Your program should ensure
that the computer always wins. Rules for the game are as follows:
    - There are 21 matchsticks.
    - The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
    - After the person picks, the computer does its picking.
    - Whoever is forced to pick up the last matchstick loses the game.
*/

#include <stdio.h>

int main(void)
{
    int matches = 21;
    int computer, player;
    while (matches >= 1)
    {
        printf("Current Match Sticks: %d\n", matches);
        printf("Pick 1,2,3 or 4 matchsticks: ");
        scanf("%d", &player);

        if(player > 4)
        {
            printf("Invalid.");
            break;
        }

        computer = 5 - player;

        printf("Computer picks: %d\n", computer);
        matches = matches - player - computer;
        if(matches == 1)
        {
            printf("Computer wins!\n");
            break;
        }
    }
}