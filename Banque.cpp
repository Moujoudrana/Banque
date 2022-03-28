// Banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "Compte.h"
#include "CompteEpargne.h"
#include "ComptePayant.h"
#include "ComptePayantEpargne.h"
using namespace Banque;
using namespace std;
int main()
{
    Client* cl1 = new Client("Oufrout", "Rana", "Casa");
    Client* cl2 = new Client("Moujoud", "Walid", "Casa");
    Client* cl3 = new Client("Oufrout", "Walid", "Casa");
    Devise* solde1 = new Devise(1000);
    Devise* solde2 = new Devise(2000);
    Devise* solde3 = new Devise(5400);
    CompteEpargne* ce = new CompteEpargne(cl1, solde1, 0.05);
    ComptePayant* cp = new ComptePayant(cl2, solde2);
    ComptePayantEpargne* cpe = new ComptePayantEpargne(cl3, solde3, 0.05);
    Devise* retirer1 = new Devise(800);
    Devise* retirer2 = new Devise(200);
    ce->consulterSolde();
    cout << ce->retirerArgent(retirer1) << endl;
    ce->consulterSolde();
    cout << ce->retirerArgent(retirer2) << endl;
    ce->consulterSolde();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
