#include "banque.h"

namespace BANQUE {
Banque::Banque(int nbMaxClients, int nbMaxComptes, int nbMaxTypeComptes)
    :NB_MAX_CLIENTS(nbMaxClients),nbClients(0),NB_MAX_COMPTES(nbMaxComptes),nbComptes(0),NB_MAX_TYPECOMPTES(nbMaxTypeComptes),nbTypeComptes(0)
    {
        clients = new Client*[NB_MAX_CLIENTS];
        comptes = new Compte*[NB_MAX_COMPTES];
        types = new TypeCompte*[NB_MAX_TYPECOMPTES];
    }

    void Banque::Initialiser(string nomBanque){
        nom = nomBanque;
    }

    TypeCompte* Banque::CreerUnTypeDeCompte(string type, double minimum, double maximum, double remuneration){
        TypeCompte* newType = new TypeCompte(type, minimum, maximum, remuneration);
        types[nbTypeComptes++] = newType;
        return newType;
    }

    Client* Banque::AjouterUnClient(string prenom, string nom, int jourNaissance, int moisNaissance, int anneeNaissance){
        Date* dateNaissance = new Date(jourNaissance, moisNaissance, anneeNaissance);
        Client* newClient = new Client(prenom, nom, dateNaissance);
        clients[nbClients++] = newClient;
        return newClient;
    }

    Compte* Banque::CreerUnCompte(string typeCompte, string prenomClient, string nomClient, double soldeInitial){
        // On retrouve le client
        Client* proprietaire = NULL;
        for(int i=0;i<nbClients;i++){
            if(clients[i]->getNom() == nomClient && clients[i]->getPrenom() == prenomClient)
                proprietaire = clients[i];
        }
        if(proprietaire == NULL)
            return NULL;

        // On retrouve le type de compte
        TypeCompte* type = NULL;
        for(int i=0;i<nbTypeComptes;i++){
            if(types[i]->getIntitule() == typeCompte)
                type = types[i];
        }
        if(type == NULL)
            return NULL;

        // On ajoute le compte
        Compte* newCompte = new Compte(type, proprietaire, soldeInitial);
        comptes[nbComptes++] = newCompte;
        return newCompte;
    }
}
