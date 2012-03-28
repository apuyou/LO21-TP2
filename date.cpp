#include "date.h"

using namespace BANQUE;
    Date::Date(int j, int m, int a):jour(j), mois(m), annee(a)
    {
        if(jour>31 || jour < 1)
            jour = 1;
        if(mois>12 || mois < 1)
            mois = 1;
        if(annee<0)
            annee = 2000;
    }

    void Date::setDate(int j, int m, int a)
    {
        jour = j;
        mois = m;
        annee = a;
        if(jour>31 || jour < 1)
            jour = 1;
        if(mois>12 || mois < 1)
            mois = 1;
        if(annee<0)
            annee = 2000;
    }

    void Date::setDateAujourdhui()
    {
        time_t timestamp;
        struct tm * t;

        timestamp = time(NULL);
        t = localtime(&timestamp);

        jour = t->tm_mday;
        mois = t->tm_mon;
        annee = 1900 + t->tm_year;
    }
