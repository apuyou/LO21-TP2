#ifndef HISTORIQUE_H
#define HISTORIQUE_H
#include <stdio.h>
#include <iostream>
#include "Operation.h"

namespace BANQUE{
/*! \class Historique
  * \brief classe representant les historiques d'op�rations
  *
  *  La classe gere l'historique des op�rations d'un compte
  */
class Historique
{
public:
    Historique(int nbMaxOperationHistorique = 5);
    void AjouterOperation(const Operation* operation);
    void Afficher();
    ~Historique();
private:
    const int NB_MAX_OPERATION_HISTORIQUE; /*!< nombre maximal d'op�rations*/
    Operation** operations; /*!< op�rations effectu�es sur le compte*/
    int nbOperations; /*!< Nombre d'op�rations effectu�es*/
    int prochaineEcriture; /*!< indice dans le tableau operations*/
};
}

#endif // HISTORIQUE_H