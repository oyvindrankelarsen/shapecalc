#ifndef __SHAPE_H__
#define __SHAPE_H__
typedef struct
{
    float a, b, c, radius, circumference, area;
} Result;

void shapemenu();
Result rectangle(Result r);
Result parallellogram(Result r);
Result triangle(Result r);
Result circle(Result r);


#endif