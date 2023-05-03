#ifndef __ROCKPAPERSCISSORS_H__
#define __ROCKPAPERSCISSORS_H__

typedef struct
{
    int wins, losses, ties;
} Result;
void rpsmenu();
int savefile(Result r);

Result res(int player, int computer, Result r);

#endif