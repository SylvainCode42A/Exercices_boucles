#include <stdio.h>


int main(void)
{
  int lignes;
  int colonnes;
  int n = 4;
  

  for (lignes = 0; lignes < n; lignes++)
  {
    for (colonnes = 0; colonnes <= lignes; colonnes++)
    {
      printf("*");
    
    }
    
    printf("\n");
  }
  return 0;
}
    
  
