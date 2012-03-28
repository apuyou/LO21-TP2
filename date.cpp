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

    void setDateAujourdhui();

