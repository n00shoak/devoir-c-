#ifndef EXO3_CPP
#define EXO3_CPP

#include <iostream>
#include "exo3.h"
using namespace std;
string nom;
string description;
int dificulte;
vector<int> suite;

Lieu::Lieu() : _nom(nom), _descritpion(description), _difficulte(dificulte), _tableau{ suite } {}

void deplacement() 
{
    string nom;
    cout << "il y a "<<3<< " route devant vous :" << endl;
    cin >> nom;
    cout << "vous prenez la " << nom << endl;
}
#endif