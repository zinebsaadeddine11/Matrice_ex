#include "Matrice.h"



Matrice::Matrice(int l, int c):ligne(l) , colonne(c)
{
  
    this->data = new int* [this->ligne];

    for (int i = 0; i < this->ligne; i++)
    {
        this->data[i] = new int[this->colonne];
    }
    for(int i=0;i<this->ligne;i++)
    {
        for (int j=0; j < this->colonne; j++)
        {
            this->data[i][j] = 0;
        }
    }
}

void Matrice::afficher() const
{
    for (int i = 0; i < this->ligne; i++)
    {
        for (int j = 0; j < this->colonne; j++)
        {
            cout << "T[" << i << "]" << "[" << j << "]= " << this->data[i][j] <<endl;
        }
    }
}

void Matrice::remplir()
{
    for (int i = 0; i < this->ligne; i++)
    {
        for (int j = 0; j < this->colonne; j++)
        {
            cout << "Valeur de T[" << i << "]" << "[" << j << "]= ";
            cin >> this->data[i][j];
        }
    }
}

Matrice Matrice::operator+(const Matrice& m) const
{
    if (ligne != m.ligne || colonne != m.colonne) {
        cout << "Erreur: dimensions incompatibles .\n";
        exit(1);
    }

    Matrice resultat(ligne, colonne);
    for (int i = 0; i < ligne; i++)
        for (int j = 0; j < colonne; j++)
            resultat.data[i][j] = data[i][j] + m.data[i][j];
    return resultat;
}

Matrice::~Matrice()
{
    for (int i = 0; i < this->ligne; i++)
    {
        delete [] this->data[i];
        this->data[i] = nullptr;
   }
    delete [] this->data;
    this->data= nullptr;
}
