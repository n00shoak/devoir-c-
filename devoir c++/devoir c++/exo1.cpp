
#include <iostream>
#include "exo1.h"
using namespace std;
void Exercice1() 
{
    int rep;
    cout << "il y a 2 route devant vous : route A [1] et route B [2]"<< endl;
    cin >> rep;
    if (rep == 1) {cout << "vous prenez la route A "<< endl; }
    else if (rep == 2) { cout << "vous prenez la route B " << endl; }
    else { cout << "mauvaise entre !"; }
}
