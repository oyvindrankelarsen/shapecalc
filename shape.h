#ifndef __SHAPE_H__
#define __SHAPE_H__
typedef struct
{
    float a, b, c, radie, omkrets, area;
} Result;

void shapemenu();
Result rektangel(Result r);
Result parallellogram(Result r);
Result triangel(Result r);
Result cirkel(Result r);


#endif