#ifndef __ROCKPAPERSCISSORS_H__
#define __ROCKPAPERSCISSORS_H__

typedef struct
{
    int wins, losses, ties;
} Resultat;
void rpsmenu();
int savefile(Resultat r);

Resultat result(int player, int computer, Resultat r);

#endif