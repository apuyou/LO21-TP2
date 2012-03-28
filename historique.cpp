#include "historique.h"

using namespace BANQUE;
Historique::Historique(int nbMaxOperationHistorique):NB_MAX_OPERATION_HISTORIQUE(nbMaxOperationHistorique), nbOperations(0), prochaineEcriture(0)
{
    if(nbMaxOperationHistorique < 0)
        std::cerr<<"Nombre d'operations par historique insuffisant."<<std::endl;
    operations = new Operation*[NB_MAX_OPERATION_HISTORIQUE];
}

void Historique::AjouterOperation(const Operation* operation)
{
    if(prochaineEcriture < NB_MAX_OPERATION_HISTORIQUE)
        operations[prochaineEcriture++] = (Operation*) operation;
    else {
        for (int i=0; i<NB_MAX_OPERATION_HISTORIQUE; ++i)
            operations[i] = operations[i+1];
        operations[NB_MAX_OPERATION_HISTORIQUE - 1] = (Operation*) operation;
    }
    nbOperations++;
}

void Historique::Afficher()
{
    std::cout<<"HISTORIQUE :"<<std::endl;
    for(int i=0; i<prochaineEcriture; ++i)
        operations[i]->Afficher();
}

Historique::~Historique()
{
    delete [] operations;
}
