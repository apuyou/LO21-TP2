#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include "date.h"
using namespace std;

namespace BANQUE {
    /*! \class Client
     *
     * Un client de la banque
     */
    class Client
    {
    public:
        Client(string nomClient, string prenomClient, Date* dateNaissanceClient);
        string getNom(){return nom;}
        string getPrenom(){return prenom;}
        Date* getDateNaissance(){return dateNaissance;}
    private:
        string nom; /*!< Nom du client */
        string prenom; /*!< Prénom du client */
        Date* dateNaissance; /*!< Date de naissance du client */
    };
}

#endif // CLIENT_H
