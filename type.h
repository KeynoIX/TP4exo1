#ifndef TYPE_H_INCLUDED
#define TYPE_H_INCLUDED

typedef enum 
{
  First = 1, Gold = 2, Diamond = 3, Business = 4 //Type d'abonnement

}Sub; //Type d'abonnement souscrit 

typedef struct
{
  int id; //numéro client
  Sub sub; //l'abonnement (First,etc...), elle renvoie aussi à l'énumération Sub
  int price; //Prix de l'abonnement 
  int old; //l'ancienneté 

} Customer; //Structure de l'information du client


#endif // TYPE_H_INCLUDED