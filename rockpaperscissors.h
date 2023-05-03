#ifndef __ROCKPAPERSCISSORS_H__
#define __ROCKPAPERSCISSORS_H__

typedef struct
{
    int wins, losses, ties;
} Rpcresult;

void rpsmenu();
int savefile(Rpcresult r);

Rpcresult res(int player, int computer, Rpcresult r);

#endif