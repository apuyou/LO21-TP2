#include "client.h"

namespace BANQUE {
    Client::Client(string nomClient, string prenomClient, Date* dateNaissanceClient)
        :nom(nomClient),prenom(prenomClient),dateNaissance(dateNaissanceClient)
    {
    }
}
