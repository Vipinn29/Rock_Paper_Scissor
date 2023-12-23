#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RockPaperScissor(char you, char comp)
{
    // 0 for draw, 1 for You Win and -1 for You Lose.
    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
}

void main()
{
    char you, comp;
    int n;
    srand(time(0));
    n = rand() % 100;

    if (n <= 33)
    {
        comp = 'r';
    }
    else if (n > 33 && n <= 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("Welcome to Rock-Paper-Scissor.\nChoose 'r' for rock, 'p' for paper, 's' for scissor.\n");
    scanf("%c", &you);
    if (you == 'r' || you == 's' || you == 'p')
    {
        int result = RockPaperScissor(you, comp);
        if (result == 0)
        {
            printf("Game Draw!\n");
        }

        else if (result == 1)
        {
            printf("You Win!\n");
        }
        else
        {
            printf("You Lose!\n");
        }
        printf("You choosed %c and Computer choosed %c.\n", you, comp);
    }
    else
    {
        printf("Sorry! Wrong selection.\n");
    }
}