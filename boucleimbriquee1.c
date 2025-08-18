#include <stdio.h>

#define N 4


int main(void)
{
  int lignes, colonnes;

  for (lignes = 0 ; lignes < N; lignes++)
  {
    for (colonnes = 0; colonnes < N; colonnes++)
    {
      printf("*");
    }
    printf("\n");    
  }

  return 0;
}
  
