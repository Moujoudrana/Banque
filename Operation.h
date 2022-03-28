#pragma once
#include <iostream>
#include "Devise.h"

using namespace std;

namespace Banque {
	class Operation
	{
	private:
		static int cpt;
		int numOperation;
		string libelle;
		Devise* montant;
	public:
		Operation(string lib, Devise* montant);
		void afficher() const;
	};
};