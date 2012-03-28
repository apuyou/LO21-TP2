#include "compte.h"

namespace BANQUE {

    int Compte::prochainNumero = 0;

    Compte::Compte(TypeCompte* type, Client* propro, double sol)
        :TypeCompte(type), proprietaire(propro), numero(prochainNumero++), solde(sol), interetsCumules(0)
    {historique = new Historique();
    }

    bool Compte::Deposer(double montant)
    {
        Date* date = new Date();
        date->setDateAujourdhui();
        Operation* operation = new Operation(Depot, montant, this, date);
        historique->AjouterOperation(operation);
        solde += montant;
        return true;
    }

    bool Retirer(double montant)
    {
        Date* date = new Date();
        date->setDateAujourdhui();
        Operation* operation = new Operation(Retrait, montant, this, date);
        historique->AjouterOperation(operation);
        solde -= montant;
        return true;
    }

    bool TransfererVers(double montant, Compte* destination)
    {
        Date* date = new Date();
        date->setDateAujourdhui();
        Operation* operation = new Operation(Transfert, montant, destination, date);
        historique->AjouterOperation(operation);
        solde -= montant;

        //Reception du transfert de la part du compte destination
        Operation* operation2 = new Operation(ReceptionTransfert, montant, this, date);
        destination->historique->AjouterOperation(operation2);
        destination->solde += montant;
        return true;
    }

    Compte::~Compte()
    {
        delete historique;
    }
}
