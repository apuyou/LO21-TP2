#ifndef DATE_H
#define DATE_H

namespace BANQUE {

    class Date
    {
    private:
        int jour;
        int mois;
        int annee;
    public:
        Date(int j=1, int m=1, int a=2000);
        int getJour(){return jour;}
        int getMois();
        int getAnnee();
        void setDateAujourdhui();
    };

}

#endif // DATE_H
