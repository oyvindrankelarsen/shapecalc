#include <stdio.h>
#include <stdlib.h>
#include "safeinput.h"
#include "calc.h"
#include "shape.h"
#include "rockpaperscissors.h"

int main()
{
    while (1)
    {
        printf("\nHuvudmeny\n");
        printf("1. Former\n");
        printf("2. Miniräknare\n");
        printf("3. StenSaxPåse\n");
        printf("4. Exit\n");

        int sel = 0;
        while (!(GetInputInt("Välj: ", &sel)))
        {
            printf("Mata bara in tal\n");
        }
        if (sel == 1)
            Shape();
        else if (sel == 2)
            Calc();
        else if (sel == 3)
            Rockpaperscissors();
        else if (sel == 4)
            exit(0);
        else
            printf("Välj ett alternativ ur menyn\n");
    }

    return 0;
}