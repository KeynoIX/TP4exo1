#include <stdio.h>
#include <stdlib.h>
#include "type.h"

void displayCustomer(Customer c)
{

  printf("Qu'elle est votre numéro client ?\n");
  scanf("%d", &(c.id)); 

  printf("Qu'elle est votre abonnement ? 1 pour First, 2 pour Gold, 3 pour Diamond, 4 pour Business\n");
  scanf("%d", &(c.sub));

  printf("Qu'elle est votre ancienneté ?\n");
  scanf("%d", &(c.old)); 

  switch (c.sub)
    {
      case 1 : printf("Votre tarif est de 10€, avec un supplement de 7€ et une réduction de votre acienneté * 1\n"); break;
      case 2 : printf("Votre tarif est de 10€, avec un supplement de 11€ et une réduction de votre acienneté * 1\n"); break;
      case 3 : printf("Votre tarif est de 10€, avec un supplement de 13€ et une réduction de votre acienneté * 1\n"); break;
      case 4 : printf("Votre tarif est de 10€, avec un supplement de 22€ et une réduction de votre acienneté * 1\n"); break;
        
    }
  printf("\n");
  printf("Attention si vous avez une acienneté de plus de 5 ans, seul la réduction de 5 ancienneté s'applique\n"); 
  
}