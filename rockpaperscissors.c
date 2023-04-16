#include <stdio.h>
#include <stdlib.h>
#include "safeinput.h"
#include "rockpaperscissors.h"

void Rockpaperscissors()
{
    while (1)
    {
        printf("Sten sax påse\n");
        printf("1. Sten\n");
        printf("2. Sax\n");
        printf("3. Påse\n");
        printf("4. Tillbaks till huvudmeny\n");

        int sel = 0;
        GetInputInt("Välj:", &sel);
        if (sel == 1)
            printf("Du valde sten\n");
        else if (sel == 2)
            printf("Du valde sax\n");
        else if (sel == 3)
            printf("Du valde påse\n");
        else if (sel == 4)
            main();
        else
            printf("Välj ett alternativ ur menyn\n");
    }
}