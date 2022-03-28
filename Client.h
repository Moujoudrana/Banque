#pragma once
#include <iostream>
#include <vector>

using namespace std;
namespace Banque {
	class Compte;
	class Client
	{
	private:
		string nom;
		string prenom;
		string adresse;
		vector<Compte*> listeComptes;

	public:
		Client(string n, string p, string a);
		void afficher();
		~Client();
	};
};