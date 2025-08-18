#include <stdio.h>

int calcul (int calcul_nombre, int nombre);

int main(void)
{
  int nombre = 0;
  int somme;

  int resultat = calcul(somme, nombre);

  printf("La somme des nombres de 1 à 100 est : %d\n", resultat);

  return 0;
}

int calcul(int calcul_nombre, int nombre)
{
  while (calcul_nombre <= 100)
  {
    calcul_nombre += nombre;
    calcul_nombre++;
  }
}
