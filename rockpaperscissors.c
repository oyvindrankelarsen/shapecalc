#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "safeinput.h"
#include "rockpaperscissors.h"

void Rockpaperscissors()
{
    while (1)
    {
        int player = 0, computer = 0;

        printf("Sten sax påse\n");
        printf("1. Sten\n");
        printf("2. Sax\n");
        printf("3. Påse\n");
        printf("4. Tillbaks till huvudmeny\n");

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
            break;
        else
            printf("Välj ett alternativ ur menyn\n");

        srand(time(NULL));

        printf("Datorn valde");
        srand(time(NULL));
        computer = rand() % 3 + 1;
        if (computer == 1)
            printf("sten");
        else if (computer == 2)
            printf("sax");
        else if (computer == 3)
        {
            printf("påse");
        }
        puts("\n");
        if (player == computer)
            printf("Oavgjort!\n\n");

        else if ((player == 1 && computer == 2) || (player == 3 && computer == 1) || (player == 2 && computer == 3))
            printf("Du vann!\n\n");
        else
            printf("Datorn vann!\n\n");
    }
}