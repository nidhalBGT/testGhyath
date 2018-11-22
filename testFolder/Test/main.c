#include <stdio.h>
#include <stdlib.h>




int somme (int x , int y)
{
    return x+y;
}

void produit(int x , int y)
{
    printf("produit = %d",x*y);
}

void afficher(int x , int y )
{
     printf(" abs = %d   , ord = %d ",x,y);
}

int main()
{

    /*************************** Manipulation point 1 ********************/
    int x1,y1,z;

    printf("donner l'abscisse \n  ");
    scanf("%d",&x1);

    printf("donner l'ordonnee   \n ");
    scanf("%d",&y1);


    afficher(x1,y1);
    z= somme(x1,y1);
    printf("somme = %d\n ",z);
    produit(x1,y1);


    /*************************** Manipulation point  2********************/
    int x2,y2;

    printf("donner l'abscisse \n  ");
    scanf("%d",&x2);

    printf("donner l'ordonnee  \n ");
    scanf("%d",&y2);


    afficher(x2,y2);
    z = somme(x2,y2);
    printf("somme = %d\n ",z);
    produit(x2,y2);



    char ch[10];
    printf("donner votre nom");
    scanf("%s",ch);

    printf("chaine = %s",ch);

    int *x;

    int t[50];









    return 0;
}
