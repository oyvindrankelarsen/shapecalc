#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "safeinput.h"
#include "rockpaperscissors.h"

int savefile(Rpcresult r)
{
    char *path = "score.txt";
    FILE *f = fopen(path, "a");
    if (!f)
    {
        printf("Could not save the result in file\n");
        perror(path);
        return EXIT_FAILURE;
    }
    int sum = r.wins + r.losses + r.ties;
    int sharewins = 100 * r.wins / sum;
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char *datetime = asctime(tm);
    datetime[strlen(datetime) - 1] = '\0';
    fprintf(f, "%s Wins: %d Ties: %d Losses: %d. You won in %d percent of your attempts.\r", datetime, r.wins, r.ties, r.losses, sharewins);
    fclose(f);
    return 0;
}

Rpcresult res(int player, int computer, Rpcresult r)
{
    if (player == computer)
    {
        r.ties++;
    }
    else if ((player == 1 && computer == 2) || (player == 3 && computer == 1) || (player == 2 && computer == 3))
    {
        r.wins++;
    }
    else
    {
        r.losses++;
    }
    return r;
}

void rpsmenu()
{
    Rpcresult r = {0, 0, 0};
    while (1)
    {
        int player = 0, computer = 0;

        printf("\nRock paper scissors\n");
        printf("1. Rock\n");
        printf("2. Scissors\n");
        printf("3. Paper\n");
        printf("4. Main menu\n");

        while (!(GetInputInt("Choose: ", &player)))
        {
            printf("Only enter numbers\n");
        }

        if (player == 1)
            printf("You chose rock\n");
        else if (player == 2)
            printf("You chose scissors\n");
        else if (player == 3)
            printf("You chose paper\n");
        else if (player == 4)
        {
            savefile(r);
            break;
        }
        else
            printf("Choose an alternative from the menu\n");

        printf("The computer chose");
        srand(time(NULL));
        computer = rand() % 3 + 1;

        if (computer == 1)
            printf(" rock\n");
        else if (computer == 2)
            printf(" scissors\n");
        else if (computer == 3)
            printf(" paper\n");
        r = res(player, computer, r);
        printf("Wins: %d Ties: %d Losses: %d\n", r.wins, r.ties, r.losses);
    
    }
}