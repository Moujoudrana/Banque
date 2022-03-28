#include "ComptePayantEpargne.h"
using namespace Banque;

Banque::ComptePayantEpargne::ComptePayantEpargne(Client* cl, Devise* s, double taux)
	: CompteEpargne(cl, s, taux), ComptePayant(cl, s)
{
}

bool Banque::ComptePayantEpargne::retirerArgent(Devise* montant)
{
	if(this->CompteEpargne::retirerArgent(montant)){ 
		this->ComptePayant::retirerArgent(montant); 
		return true;
	}

	return false;
}


Banque::ComptePayantEpargne::~ComptePayantEpargne()
{
	cout << "Destrcuteur de la classe " << endl;
}
