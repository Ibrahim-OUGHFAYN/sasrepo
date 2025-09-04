#include <stdio.h>
#include <math.h>
struct temp
{
    int ddd;
    int dda;
};

int timetomins(int h, int m)
{
    return h * 60 + m;
}

int main()
{
    struct temp tab[10];
    tab[0].ddd = timetomins(8, 0);
    tab[0].dda = timetomins(10, 16);
    tab[1].ddd = timetomins(9, 43);
    tab[1].dda = timetomins(11, 52);
    tab[2].ddd = timetomins(11, 19);
    tab[2].dda = timetomins(13, 31);
    tab[3].ddd = timetomins(12, 47);
    tab[3].dda = timetomins(15, 0);
    tab[4].ddd = timetomins(14, 0);
    tab[4].dda = timetomins(16, 8);
    tab[5].ddd = timetomins(15, 45);
    tab[5].dda = timetomins(17,55);
    tab[6].ddd = timetomins(19, 0);
    tab[6].dda = timetomins(21, 20);
    tab[7].ddd = timetomins(21, 45);
    tab[7].dda = timetomins(23, 58);
    int h, min;
    printf("donner moi le temp:");
    scanf("%d:%d", &h, &min);
    int tt = timetomins(h, min);
    printf("the time in mins is %d",tt);
    int defmins, defmins1 = 10000, indicelaplusproche;
    for (int i = 0; i < 8; i++)
    {
        defmins = abs(tab[i].ddd - tt);
        if (defmins < defmins1)
        {
            indicelaplusproche = i;
            defmins1 = defmins;
        }
    }
    printf("L'heure de départ la plus proche est %d:%d , arrivant à %d:%d ", (tab[indicelaplusproche].ddd) / 60,(tab[indicelaplusproche].ddd)%60, (tab[indicelaplusproche].dda)/60, (tab[indicelaplusproche].dda)%60);
}
