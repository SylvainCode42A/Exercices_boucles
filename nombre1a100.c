#include <stdio.h>

int main(void)
{
  int resultat = 0;
  int n = 1;

  for ( ; n <= 100; n++)
  {
    resultat += n;

  }


  printf("Le resultat est : %d", resultat);
  
  return 0;
}
