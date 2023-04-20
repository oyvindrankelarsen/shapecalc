#include <stdio.h>
#include "calc.h"
#include "safeinput.h"

float plus(float a, float b)
{
    return a + b;
}

float minus(float a, float b)
{
    return a - b;
}

float multiplikation(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int modulus(float a, float b)
{
    return (int)a % (int)b;
}

void calcmenu()
{
    while (1)
    {
        float tal1 = 0, tal2 = 0;
        while (!(GetInputFloat("Mata in tal 1: ", &tal1)))
        {
            printf("Mata bara in tal\n");
        }

        while (!(GetInputFloat("Mata in tal 2: ", &tal2)))
        {
            printf("Mata bara in tal\n");
        }

        printf("\nMiniräknarmeny\n");
        printf("1. +\n");
        printf("2. -\n");
        printf("3. *\n");
        printf("4. /\n");
        printf("5. %s\n", "%");
        printf("6. Huvudmeny\n");

        int sel = 0;
        while (!(GetInputInt("Välj Operator från menyn: ", &sel)))
        {
            printf("Mata bara in tal\n");
        }
        if (sel == 1)
        {
            float resultat = plus(tal1, tal2);
            printf("Summan av %.2f och %.2f är %.2f \n", tal1, tal2, resultat);
        }
        else if (sel == 2)
        {
            float resultat = minus(tal1, tal2);
            printf("Skillnaden av %.2f och %.2f är %.2f\n", tal1, tal2, resultat);
        }

        else if (sel == 3)
        {
            float resultat = multiplikation(tal1, tal2);
            printf("Produkten av %.2f och %.2f är %.2f\n", tal1, tal2, resultat);
        }

        else if (sel == 4)
        {
            float resultat = division(tal1, tal2);
            printf("Kvoten av %.2f och %.2f är %.2f\n", tal1, tal2, resultat);
        }

        else if (sel == 5)
        {
            int resultat = modulus(tal1, tal2);
            printf("Resten av %d och %d är %d\n", (int)tal1, (int)tal2, (int)resultat);
        }

        else if (sel == 6)
            break;

        else
            printf("Välj ett alternativ ur menyn\n");
    }
}