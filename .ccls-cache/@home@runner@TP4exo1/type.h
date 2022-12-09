#ifndef TYPE_H_INCLUDED
#define TYPE_H_INCLUDED

typedef struct
{
  int numero; 
  int sub; 
  int price;
  int old;

} Customer; 

typedef enum 
{
  First = 1, Gold = 2, Diamond = 3, Business = 4
}Sub;

#endif // TYPE_H_INCLUDED