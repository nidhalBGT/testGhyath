#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED


using namespace std;

class Point
{
    public:
    int abs;
    int ord;


    Point();
    Point(int x,int y);
    Point(int x);
    ~Point();
    void afficher();
    void somme();
    void produit();



};


#endif // POINT_H_INCLUDED
