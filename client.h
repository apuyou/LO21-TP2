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
        Client();
    private:
        string nom; /*!< Nom du client */
        string prenom; /*!< Prénom du client */
        Date dateNaissance; /*!< Date de naissance du client */
    };
}

#endif // CLIENT_H
