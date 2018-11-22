#include <iostream>
#include "Point.h"


using namespace std;

int main()
{

   Point p1 ; // appel automatique au constructeur par défaut


    p1.afficher();
    p1.somme();
    p1.produit();





   Point p2 = Point(2,3);
   p2.afficher();
   p2.somme();
   p2.produit();

   Point p3 = Point(5);
   p3.afficher();



    return 0;
}
