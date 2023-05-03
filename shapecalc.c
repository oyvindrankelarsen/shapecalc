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
        printf("\n Main menu\n");
        printf("1. Shapes\n");
        printf("2. Calculator\n");
        printf("3. Rock Paper Scissors\n");
        printf("4. Exit\n");

        int sel = 0;
        while (!(GetInputInt("Choose: ", &sel)))
        {
            printf("Only enter numbers\n");
        }
        if (sel == 1)
            shapemenu();
        else if (sel == 2)
            calcmenu();
        else if (sel == 3)
            rpsmenu();
        else if (sel == 4)
        {
            printf("Thank you for this time!");
            exit(0);
        }
        else
            printf("Choose an alternative from the menu\n");
    }
}