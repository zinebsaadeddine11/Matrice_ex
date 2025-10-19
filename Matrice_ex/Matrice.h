#pragma once
#include<iostream>
using namespace std;

class Matrice
{
private:
	int** data;
	int ligne;
	int colonne;
public:
	Matrice (int , int );
	void afficher() const;
	void remplir();
	Matrice operator+(const Matrice& m) const;
	~Matrice();
};

