#include "Client.h"
#include"Compte.h"
using namespace Banque;

Client::Client(string nom , string prenom, string adresse)
{
	this->nom = nom;
	this->prenom = prenom;
	this->adresse = adresse;
}

void Banque::Client::afficher()
{
	std::cout << "Nom : " << nom << endl;
	std::cout << "Prenom : " << nom << endl;
	std::cout << "Adresse : " << nom << endl;
}

Banque::Client::~Client()
{
	std::cout << "Destructeur de classe Client."<<endl;
}