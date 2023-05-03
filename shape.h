#ifndef __SHAPE_H__
#define __SHAPE_H__
typedef struct
{
    float a, b, c, radius, circumference, area;
} Shaperesult;

void shapemenu();
Shaperesult rectangle(Shaperesult r);
Shaperesult parallellogram(Shaperesult r);
Shaperesult triangle(Shaperesult r);
Shaperesult circle(Shaperesult r);


#endif