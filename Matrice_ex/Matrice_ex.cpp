// Matrice_ex.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Matrice.h"



int main()
{
    Matrice N(2,2);
    N.afficher();
    cout << "Veuillez saisir les valeurs de la matrice 1: " << endl;
    N.remplir();
    N.afficher();
    Matrice* M = new Matrice(2, 2);
    cout << "\n";
    M->afficher();
    cout << "Veuillez saisir les valeurs de la matrice 2:" << endl;
    M->remplir();
    M->afficher();
    cout << "\n";
    cout << "Somme des deux matrices :" << endl;
    Matrice som = N + (*M);
    som.afficher();
    M->~Matrice();
    //tableau des matrices
    int n;
    cout << "Saisir nbr de matrices que vous voulez dans le tableau: " << endl;
    cin >> n;
    Matrice** tab = new Matrice * [n];
    //remplissage du tableau
    for (int i = 0; i < n; i++)
    {
        tab[i]=new Matrice(2, 2);
        cout << "Remplir la matrice " << i + 1 << endl;
        tab[i]->remplir();
    }

//affichage du tableau

    for (int i = 0; i < n; i++) {
        cout << "la matrice " << i + 1 << ": " << endl;
        tab[i]->afficher();
}
    //destruction du tableau

    for (int i = 0; i < n; i++) {
        delete[] tab[i];
        tab[i]=nullptr;
    }
    delete[] tab;
    tab = nullptr;
    
    return 0;
    
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
