#include <stdio.h>
#include "calc.h"
#include "safeinput.h"

void Calc()
{
    while (1)
    {
        float tal1 = 0, tal2 = 0;
        GetInputFloat("Mata in tal 1: ", &tal1);
        GetInputFloat("Mata in tal 2: ", &tal2);
        printf("\nMiniräknarmeny\n");
        printf("1. +\n");
        printf("2. -\n");
        printf("3. *\n");
        printf("4. /\n");
        printf("5. %s\n", "%");
        printf("6. Huvudmeny\n");

        int sel = 0;
        GetInputInt("Välj Operator från menyn: ", &sel);
        if (sel == 1)
        {
            printf("Summan av %.2f och %.2f är %.2f \n", tal1, tal2, tal1 + tal2);
        }
        else if (sel == 2)
        {
            printf("Skillnaden av %.2f och %.2f är %.2f\n", tal1, tal2, tal1 - tal2);
        }
        else if (sel == 3)
        {
            printf("Produkten av %.2f och %.2f är %.2f\n", tal1, tal2, tal1 * tal2);
        }
        else if (sel == 4)
        {
            printf("Kvoten av %.2f och %.2f är %.2f\n", tal1, tal2, tal1 / tal2);
        }
        else if (sel == 5)
        {
            int result = (int)tal1 % (int)tal2;
            printf("Resten av %d och %d är %d\n", (int)tal1, (int)tal2, result);
        }
        else if (sel == 6)
        {
            break;
        }
        else
            printf("Välj ett alternativ ur menyn\n");
    }
}