#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>


using namespace std;

class Point
{
public:
    int abs,ord;

    Point(); // consrtucteur sans param�tre ( par d�faut)
    Point(int x,int y); //contructeur parmetr�
    ~Point();
    void saisir();
    void afficher();

};


#endif // POINT_H_INCLUDED
