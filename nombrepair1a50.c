#include <stdio.h>

int main(void)
{
  int nombre = 0;
  int n = 0;

  while (n <= 50)
  {
    nombre += n;
    n = n + 2;
  }

  printf("Le resultat est : %d\n", nombre);

  return 0;
}
