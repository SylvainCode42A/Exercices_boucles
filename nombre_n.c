#include <stdio.h>

int main(void)
{
  int nombre_utilisateur;
  int nombre = 1;

  printf("Choisi un nombre\n");
  scanf("%d", &nombre_utilisateur);

  while (nombre <= nombre_utilisateur)
  { 
    printf("[%d] ", nombre);
    nombre++;
  }
  printf("\n");

  return 0;
} 

