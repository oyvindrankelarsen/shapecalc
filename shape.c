#define pi 3.14159265359
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "safeinput.h"
#include "shape.h"

void Shape()
{
    while (1)
    {
        printf("\nFormmeny\n");
        printf("Rektangel\n");
        printf("Parallellogram\n");
        printf("Triangel\n");
        printf("Cirkel\n");
        printf("Huvudmeny\n");

        char form[100] = {0};
        GetInput("Välj:", form, 100);

        float omkrets = 0, area = 0, basen = 0, höjden = 0, radie = 0, a = 0, b = 0, c = 0;

        if (strcmp(form, "Rektangel") == 0)
        {
            GetInputFloat("Mata in basen: ", &basen);
            GetInputFloat("Mata in höjden: ", &höjden);
            omkrets = 2 * basen + 2 * höjden;
            area = basen * höjden;
            printf("Omkretsen är %.2f och area är %.2f\n", omkrets, area);
        }
        else if (strcmp(form, "Parallellogram") == 0)
        {
            GetInputFloat("Mata in basen: ", &basen);
            GetInputFloat("Mata in höjden: ", &höjden);
            omkrets = 2 * basen + 2 * höjden;
            area = basen * höjden;
            printf("Omkretsen är %.2f och area är %.2f\n", omkrets, area);
        }
        else if (strcmp(form, "Triangel") == 0)
        { 
            GetInputFloat("Mata in sida a: ", &a);
            GetInputFloat("Mata in sida b: ", &b);
            GetInputFloat("Mata in sida c: ", &c);
            omkrets = a + b + c;
            area = a * b / 2;
            printf("Omkretsen är %.2f och area är %.2f\n", omkrets, area);
        }
        else if (strcmp(form, "Cirkel") == 0)
        {
            GetInputFloat("Mata in radie: ", &radie);
            omkrets = pi * radie * 2;
            area = pi * (radie * radie);
            printf("Omkretsen är %.2f och area är %.2f\n", omkrets, area);
        }
        else if (strcmp(form, "Huvudmeny") == 0)
            break;
        else
            printf("Välj ur menyn\n");
    }
}