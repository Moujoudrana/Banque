#pragma once
#include "Compte.h"
#include "Client.h"
#include "Devise.h"

namespace Banque {
    class CompteEpargne :
        virtual public Compte
    {
    private:
        double tauxInteret;
    public:
        CompteEpargne();
        CompteEpargne(Client* c, Devise* s, double taux);
        void calculInteret();
        bool retirerArgent(Devise* montant);
        ~CompteEpargne();
    };
};