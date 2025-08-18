#include <stdio.h>

int main(void)
{
  int nombre_n;
  int multiplicateur = 1;
  int resultat = 0; 
 
  
  
  printf("Choisi un nombre\n");
  scanf("%d", &nombre_n);
  
  for (multiplicateur = 0; multiplicateur <= 10; multiplicateur++)
  {
    resultat = nombre_n * multiplicateur; 

    printf("%d * %d = %d\n", nombre_n, multiplicateur, resultat);
 
  }

  return 0;
}
  
