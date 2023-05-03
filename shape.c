#define pi 3.14159265359
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "safeinput.h"
#include "shape.h"

Result rectangle(Result r)
{
    r.circumference = 2 * r.a + 2 * r.b;
    r.area = r.a * r.b;
    return r;
}

Result parallellogram(Result r)
{
    r.circumference = 2 * r.a + 2 * r.b;
    r.area = r.a * r.b;
    return r;
}

Result triangle(Result r)
{
    r.circumference = r.a + r.b + r.c;
    r.area = r.a * r.b / 2;
    return r;
}

Result circle(Result r)
{
    r.circumference = 2 * pi * r.radius;
    r.area = pi * r.radius * r.radius;
    return r;
}

void shapemenu()
{
    Result r = {0, 0, 0};
    while (1)
    {
        printf("\nForms menu\n");
        printf("Rectangle\n");
        printf("Parallellogram\n");
        printf("Triangle\n");
        printf("Circle\n");
        printf("Main menu\n");

        char form[100] = {0};
        float base = 0, height = 0, radius = 0, a = 0, b = 0, c = 0;

        while (GetInput("Enter text from the menu: ", form, sizeof(form)) != INPUT_RESULT_OK)
        {
            printf("Only enter text from the menu\n");
        }

        if (strcmp(form, "Rectangle") == 0)
        {
            while (!(GetInputFloat("Enter the base: ", &base)))
            {
                printf("Only enter numbers\n");
            }
            while (!(GetInputFloat("Enter the height: ", &height)))
            {
                printf("Only enter numbers\n");
            }
            r.a = base;
            r.b = height;
            r = rectangle(r);
            printf("circumference is %.2f and area is %.2f\n", r.circumference, r.area);
        }

        else if (strcmp(form, "Parallellogram") == 0)
        {
            while (!(GetInputFloat("Enter the base: ", &base)))
            {
                printf("Only enter numbers\n");
            }
            while (!(GetInputFloat("Enter the height: ", &height)))
            {
                printf("Only enter numbers\n");
            }
            r.a = base;
            r.b = height;
            r = parallellogram(r);
            printf("The circumference is %.2f and the area is %.2f\n", r.circumference, r.area);
        }

        else if (strcmp(form, "Triangel") == 0)
        {
            while (!(GetInputFloat("Enter side a: ", &a)))
            {
                printf("Only enter numbers\n");
            }
            while (!(GetInputFloat("Enter side b: ", &b)))
            {
                printf("Only enter numbers\n");
            }
            while (!(GetInputFloat("Enter side c: ", &c)))
            {
                printf("Only enter numbers\n");
            }
            r.a = a;
            r.b = b;
            r.c = c;
            r = triangle(r);
            printf("The circumference is %.2f and the area is %.2f\n", r.circumference, r.area);
        }

        else if (strcmp(form, "Cirkel") == 0)
        {
            while (!(GetInputFloat("Enter the radius: ", &radius)))
            {
                printf("Only enter numbers\n");
            }
            r.radius = radius;
            r = circle(r);
            printf("circumference is %.2f and area is %.2f\n", r.circumference, r.area);
        }
        else if (strcmp(form, "Main menu") == 0)
            break;
        else
            printf("Choose from the menu\n");
    }
}