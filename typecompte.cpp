#include "typecompte.h"

namespace BANQUE {
    TypeCompte::TypeCompte(string intituleCompte, double plafondMinimum, double plafondMaximum, double tauxRemunerationCompte)
        :intitule(intituleCompte),plafondMin(plafondMinimum),plafondMax(plafondMaximum),tauxRemuneration(tauxRemunerationCompte)
    {
    }
}
