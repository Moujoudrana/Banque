#include "CompteEpargne.h"
#include <assert.h>

using namespace Banque;

Banque::CompteEpargne::CompteEpargne()
{
}

CompteEpargne::CompteEpargne(Client* c, Devise* s, double taux) : Compte(c, s)
{
	assert(taux > 0 && taux < 100);
	this->tauxInteret = taux;
}

void CompteEpargne::calculInteret()
{
	Devise s = (this->Compte::calculInteret(this->tauxInteret));
	this->deposerArgent(&s);
}

bool Banque::CompteEpargne::retirerArgent(Devise* montant)
{
	CompteEpargne c;
	if (this->checkSolde(montant)) {
		if (typeid(*this) == typeid(c)) {
			this->Compte::retirerArgent(montant);
			return true;
		}
		return true;
	}
	return false;
}

Banque::CompteEpargne::~CompteEpargne()
{
}