#include <iostream>
#include "Point.h"

using namespace std;

int main()
{







    Point p1; // creation d'une instance de la classe point

    cout << " Point p1 : Avant modification "<<endl;
    p1.afficher(); // appel de la methode afficher a travers l'instance p1 pour afficher ses informations
    p1.saisir(); // appel de la methode saisir pour  donner les valeurs du point p1
    cout << " Point p1 : Apres modification "<<endl;
    p1.afficher();

    // *********************************************

    cout << " Point p2"<<endl;
    Point p2;
    p2=Point(6,2);
    p2.afficher();
    return 0;
}
