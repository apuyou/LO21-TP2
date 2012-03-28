#ifndef HISTORIQUE_H
#define HISTORIQUE_H
#include <stdio.h>
#include <iostream>
#include "Operation.h"

namespace BANQUE{
/*! \class Historique
  * \brief classe representant les historiques d'opérations
  *
  *  La classe gere l'historique des opérations d'un compte
  */
class Historique
{
public:
    Historique(int nbMaxOperationHistorique = 5);
    void AjouterOperation(const Operation* operation);
    void Afficher();
    ~Historique();
private:
    const int NB_MAX_OPERATION_HISTORIQUE; /*!< nombre maximal d'opérations*/
    Operation** operations; /*!< opérations effectuées sur le compte*/
    int nbOperations; /*!< Nombre d'opérations effectuées*/
    int prochaineEcriture; /*!< indice dans le tableau operations*/
};
}

#endif // HISTORIQUE_H
