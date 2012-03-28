#include "operation.h"

namespace BANQUE {
    Operation::Operation(TypeOperation t, double som, Compte* dest, Date* d)
        :type(t), somme(som), compteDestination(dest), date(d)
    {
    }

    void Operation::Afficher()
    {
        std::cout<<date->getJour()<<"/"<<date->getMois()<<"/"<<date->getAnnee();
        std::cout<<" -- ";
        switch (type)
    case Depot : std::cout<<"      depot "<< somme << std::endl;
                    break;
    case Retrait : std::cout<<"      retrait "<< somme << std::endl;
                    break;
    case Transfert: std::cout<<"      transfert " << somme << " vers le compte ";
                    std::cout<<compteDestination->getTypeCompte()->getIntitule() << " ";
                    std::cout<<compteDestination->getNumero() << std::endl;
                    break;
    case ReceptionTransfert: std::cout<<"reception transfert " << somme << " du compte ";
                             std::cout<<compteDestination->getTypeCompte()->getIntitule() << " ";
                             std::cout<<compteDestination->getNumero() << std::endl;
                             break;
     }
}
