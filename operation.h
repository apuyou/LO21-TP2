#ifndef OPERATION_H
#define OPERATION_H
#include "compte.h"
#include "date.h"

namespace BANQUE {
    /*! \enum TypeOperation
     *
     * Les différentes opérations présentes sur un compte
     */
    enum TypeOperation {
        Creation,
        Depot,
        Retrait,
        Transfert,
        ReceptionTransfert,
        Interets
    };

    class Operation
    {
    private:
        TypeOperation type;
        double somme;
        Compte* compteDestination;
        Date *date;
    public:
        Operation(TypeOperation t= Depot, double som = 0, Compte* dest=0, Date* d = 0);
        void Afficher();
    };
}

#endif // OPERATION_H
