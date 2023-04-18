#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "safeinput.h"
#include "rockpaperscissors.h"

int savefile(Resultat r)
{
    char *path = "score.txt";
    FILE *f = fopen(path, "a");
    if (!f)
    {
        printf("Kunde inte spara resultatet i fil\n");
        perror(path);
        return EXIT_FAILURE;
    }

    fprintf(f, "Wins: %d\tTies: %d\tLosses: %d\n", r.wins, r.ties, r.losses);
    fclose(f);
    return 0;
}

Resultat result(int player, int computer, Resultat r)
{
    if (player == computer)
    {
        r.ties++;
        printf("Oavgjort!\n\n");
    }
    else if ((player == 1 && computer == 2) || (player == 3 && computer == 1) || (player == 2 && computer == 3))
    {
        r.wins++;
        printf("Du vann!\n\n");
    }
    else
    {
        r.losses++;
        printf("Datorn vann!\n\n");
    }
    return r;
}

void rpsmenu()
{
    Resultat r = {0, 0, 0};
    while (1)
    {
        int player = 0, computer = 0;

        printf("Sten sax påse\n");
        printf("1. Sten\n");
        printf("2. Sax\n");
        printf("3. Påse\n");
        printf("4. Huvudmeny\n");

        while (!(GetInputInt("Välj: ", &player)))
        {
            printf("Mata bara in tal\n");
        }

        if (player == 1)
            printf("Du valde sten\n");
        else if (player == 2)
            printf("Du valde sax\n");
        else if (player == 3)
            printf("Du valde påse\n");
        else if (player == 4)
        {
            savefile(r);
            break;
        }
        else
            printf("Välj ett alternativ ur menyn\n");

        printf("Datorn valde");
        srand(time(NULL));
        computer = rand() % 3 + 1;

        if (computer == 1)
            printf(" sten\n");
        else if (computer == 2)
            printf(" sax\n");
        else if (computer == 3)
            printf(" påse\n");
        r = result(player, computer, r);
    }
}