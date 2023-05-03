#include <stdio.h>
#include "calc.h"
#include "safeinput.h"

float addition(float a, float b)
{
    return a + b;
}

float subtraction(float a, float b)
{
    return a - b;
}

float multiplication(float a, float b)
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
        float no1 = 0, no2 = 0;
        while (!(GetInputFloat("Enter number 1: ", &no1)))
        {
            printf("Only enter numbers\n");
        }

        while (!(GetInputFloat("Enter number 2: ", &no2)))
        {
            printf("Only enter numbers\n");
        }

        printf("\nCalculator menu\n");
        printf("1. +\n");
        printf("2. -\n");
        printf("3. *\n");
        printf("4. /\n");
        printf("5. %s\n", "%");
        printf("6. Main menu\n");

        int sel = 0;
        while (!(GetInputInt("Choose Operator from the menu: ", &sel)))
        {
            printf("Only enter numbers\n");
        }
        if (sel == 1)
        {
            float resultat = addition(no1, no2);
            printf("The sum of %.2f and %.2f is %.2f \n", no1, no2, resultat);
        }
        else if (sel == 2)
        {
            float resultat = subtraction(no1, no2);
            printf("The difference of %.2f and %.2f is %.2f\n", no1, no2, resultat);
        }

        else if (sel == 3)
        {
            float resultat = multiplication(no1, no2);
            printf("The product of %.2f and %.2f is %.2f\n", no1, no2, resultat);
        }

        else if (sel == 4)
        {
            float resultat = division(no1, no2);
            printf("the quota of %.2f och %.2f is %.2f\n", no1, no2, resultat);
        }

        else if (sel == 5)
        {
            int resultat = modulus(no1, no2);
            printf("The rest of %d och %d is %d\n", (int)no1, (int)no2, (int)resultat);
        }

        else if (sel == 6)
            break;

        else
            printf("Choose an alternative from the menu\n");
    }
}