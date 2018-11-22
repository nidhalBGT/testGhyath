#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>


using namespace std;

class Point
{
public:
    int abs,ord;

    Point(); // consrtucteur sans paramétre ( par défaut)
    Point(int x,int y); //contructeur parmetré
    ~Point();
    void saisir();
    void afficher();

};


#endif // POINT_H_INCLUDED
