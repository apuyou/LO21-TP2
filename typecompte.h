#ifndef TYPECOMPTE_H
#define TYPECOMPTE_H
#include <string>
using namespace std;

namespace BANQUE {
    class TypeCompte
    {
    private:
        string intitule;
        double plafondMin;
        double plafondMax;
        double tauxRemuneration;
    public:
        TypeCompte(string intituleCompte, double plafondMinimum, double plafondMaximum, double tauxRemunerationCompte);
        string getIntitule() const {return intitule;}
    };

}

#endif // TYPECOMPTE_H
