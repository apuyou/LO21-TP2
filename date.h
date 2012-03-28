#ifndef DATE_H
#define DATE_H
#include <time.h>

namespace BANQUE {

    class Date
    {
    private:
        int jour;
        int mois;
        int annee;
    public:
        Date(int j=1, int m=1, int a=2000);
        int getJour() const {return jour;}
        int getMois() const {return mois;}
        int getAnnee() const {return annee;}
        void setDate(int j=1, int m=1, int a=2000);
        void setDateAujourdhui();
    };

}

#endif // DATE_H
