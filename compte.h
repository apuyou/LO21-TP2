#ifndef COMPTE_H
#define COMPTE_H
#include "date.h"
#include "operation.h"
#include "historique.h"
#include "typecompte.h"
#include "client.h"

namespace BANQUE {
    /*! \class Compte
     *
     * Un compte dans la banque
     */
    class Compte
    {
    private:
        static int prochainNumero;
        int numero; /*!< Numero du compte */
        double solde; /*!< Solde disponible */
        double interetsCumules; /*!< Intérêts cumulés depuis la création du compte */
        TypeCompte* typeCompte;
        Historique* historique;
    public:
        Compte(TypeCompte* type, Client* propro, double sol=0);
        int getNumero() const {return numero;}
        TypeCompte* getTypeCompte() const {return typeCompte;}
        bool Deposer(double montant);
        bool Retirer(double montant);
        bool TransfererVers(double montant, Compte* destination);
        ~Compte();
    };
}

#endif // COMPTE_H
