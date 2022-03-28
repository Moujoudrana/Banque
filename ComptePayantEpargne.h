#pragma once
#include "ComptePayant.h"
#include "CompteEpargne.h"

namespace Banque {
    class ComptePayantEpargne :
        public ComptePayant, public CompteEpargne
    {
    public:
        ComptePayantEpargne(Client* cl, Devise* s, double taux);
        bool retirerArgent(Devise* montant);
        ~ComptePayantEpargne();
    };
};

