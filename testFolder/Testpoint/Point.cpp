#include "Point.h"
#include <iostream>

Point :: Point()
{
    abs=0;
    ord=0;

}


Point :: Point(int x,int y)
{
    abs=x;
    ord=y;

}

Point :: Point(int x)
{
    abs=x;
    ord=0;
}

Point :: ~Point()
{

}


 void Point :: afficher()
{
    cout <<" abscisse = " << abs << "ordonne = "<<ord<< endl;

}

 void Point :: somme()
{
    cout <<" somme = " << abs+ord << endl;

}

 void Point :: produit()
{
    cout <<" produit = " << abs*ord << endl;
}
