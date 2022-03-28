#include "Operation.h"
using namespace Banque;

int Operation::cpt = 0;

Banque::Operation::Operation(string lib, Devise* montant)
{
	Operation::cpt++;
	this->libelle = lib;
	this->montant = montant;
}

void Banque::Operation::afficher() const
{
	cout << "Operation : " << this->numOperation << "|";
	this->montant->afficher();
	cout << endl;
}