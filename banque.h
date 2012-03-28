#ifndef BANQUE_H
#define BANQUE_H
#include <string>
#include "client.h"
#include "compte.h"
#include "typecompte.h"

using namespace std;

namespace BANQUE {
    /*! \class Banque
     *
     * Une banque et tous ses paramètres
     */
    class Banque
    {
    private:
        string nom;  /*!< Nom de la banque */
        Client **clients;  /*!< Clients de la banque */
        Compte **comptes;  /*!< Comptes de la banque */
        TypeCompte **types;  /*!< Types de compte commercialisés */
        const int NB_MAX_CLIENTS;  /*!< Nombre maximum de clients que l'on peut créer */
        int nbClients;  /*!< Nombre de clients exisants*/
        const int NB_MAX_COMPTES;  /*!< Nombre maximum de comptes que l'on peut créer */
        int nbComptes;  /*!< Nombre de comptes dans la banque*/
        int NB_MAX_TYPECOMPTES;  /*!< Nombre maximum de types de comptes */
        int nbTypeComptes;  /*!< Nombre de types de comptes */

    public:
        /*!
         * \brief Constructeur
         *
         * Créé une nouvelle banque, en remplissant les constantes avec des
         * valeurs par défaut.
         */
        Banque(int nbMaxClients = 5, int nbMaxComptes = 5, int nbMaxTypeComptes = 5);

        /*!
         * \brief Initialise une banque
         *
         * Initialise la banque en enregistrant son nom.
         * \param string nom Le nom de la banque
         */
        void Initialiser(string nomBanque);

        /*!
         * \brief Créé un nouveau type de compte
         *
         * Créé un nouveau type de compte disponible dans cette banque.
         * \param type Nom du type de compte
         * \param minimum Somme minimum à placer sur le compte
         * \param maximum Somme maximum que l'on peut placer sur le compte
         * \param remuneration Pourcentage de rémunération annuelle du compte
         * \return le type de compte créé
         */
        TypeCompte* CreerUnTypeDeCompte(string type, double minimum, double maximum, double remuneration);

        Client AjouterUnClient(string prenom, string nom, int jourNaissance, int moisNaissance, int anneeNaissance);
        Compte CreerUnCompte(string typeCompte, string prenomClient, string nomClient, double soldeInitial);
        Compte GetCompte(string typeCompte, string prenomClient, string nomClient);

    };
}

#endif // BANQUE_H
