#define pi 3.14159265359
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "safeinput.h"
#include "shape.h"

Result rektangel(Result r)
{
    r.omkrets = 2 * r.a + 2 * r.b;
    r.area = r.a * r.b;
    return r;
}

Result parallellogram(Result r)
{
    r.omkrets = 2 * r.a + 2 * r.b;
    r.area = r.a * r.b;
    return r;
}

Result triangel(Result r)
{
    r.omkrets = r.a + r.b + r.c;
    r.area = r.a * r.b / 2;
    return r;
}

Result cirkel(Result r)
{
    r.omkrets = 2 * pi * r.radie;
    r.area = pi * r.radie * r.radie;
    return r;
}

void shapemenu()
{
    Result r = {0, 0, 0};
    while (1)
    {
        printf("\nFormmeny\n");
        printf("Rektangel\n");
        printf("Parallellogram\n");
        printf("Triangel\n");
        printf("Cirkel\n");
        printf("Huvudmeny\n");

        char form[100] = {0};
        float basen = 0, höjden = 0, radie = 0, a = 0, b = 0, c = 0;

        while (GetInput("Mata in text från menyn: ", form, sizeof(form)) != INPUT_RESULT_OK)
        {
            printf("Mata bara in text enligt menyn\n");
        }

        if (strcmp(form, "Rektangel") == 0)
        {
            while (!(GetInputFloat("Mata in basen: ", &basen)))
            {
                printf("Mata bara in tal\n");
            }
            while (!(GetInputFloat("Mata in höjden: ", &höjden)))
            {
                printf("Mata bara in tal\n");
            }
            r.a = basen;
            r.b = höjden;
            r = rektangel(r);
            printf("Omkretsen är %.2f och area är %.2f\n", r.omkrets, r.area);
        }

        else if (strcmp(form, "Parallellogram") == 0)
        {
            while (!(GetInputFloat("Mata in basen: ", &basen)))
            {
                printf("Mata bara in tal\n");
            }
            while (!(GetInputFloat("Mata in höjden: ", &höjden)))
            {
                printf("Mata bara in tal\n");
            }
            r.a = basen;
            r.b = höjden;
            r = parallellogram(r);
            printf("Omkretsen är %.2f och area är %.2f\n", r.omkrets, r.area);
        }

        else if (strcmp(form, "Triangel") == 0)
        {
            while (!(GetInputFloat("Mata in sida a: ", &a)))
            {
                printf("Mata bara in tal\n");
            }
            while (!(GetInputFloat("Mata in sida b: ", &b)))
            {
                printf("Mata bara in tal\n");
            }
            while (!(GetInputFloat("Mata in sida c: ", &c)))
            {
                printf("Mata bara in tal\n");
            }
            r.a = a;
            r.b = b;
            r.c = c;
            r = triangel(r);
            printf("Omkretsen är %.2f och area är %.2f\n", r.omkrets, r.area);
        }

        else if (strcmp(form, "Cirkel") == 0)
        {
            while (!(GetInputFloat("Mata in radie: ", &radie)))
            {
                printf("Mata bara in tal\n");
            }
            r.radie = radie;
            r = cirkel(r);
            printf("Omkretsen är %.20f och area är %.20f\n", r.omkrets, r.area);
        }
        else if (strcmp(form, "Huvudmeny") == 0)
            break;
        else
            printf("Välj ur menyn\n");
    }
}