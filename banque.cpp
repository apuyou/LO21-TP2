#include "banque.h"

namespace BANQUE {
Banque::Banque(int nbMaxClients, int nbMaxComptes, int nbMaxTypeComptes):NB_MAX_CLIENTS(nbMaxClients),NB_MAX_COMPTES(nbMaxComptes),NB_MAX_TYPECOMPTES(nbMaxTypeComptes)
    {
    }

    void Banque::Initialiser(string nomBanque){
        nom = nomBanque;
    }

    TypeCompte* CreerUnTypeDeCompte(string type, double minimum, double maximum, double remuneration){
        TypeCompte* newType = new TypeCompte(type, minimum, maximum, remuneration);
        return newType;
    }
}
