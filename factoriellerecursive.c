#include <stdio.h>

#define N 5

int factorielle(int n);

int main(void)
{
  int resultat = factorielle(N); 
 
  if (resultat == 1)
    printf("La factorielle de 0 est 1\n");
  else
    printf("La factorielle de %d est %d\n", N, resultat);

  return 0;
}    


int factorielle(int n)
{
  if (n == 0)
    return 1;
  else 
    return n * factorielle(n - 1);
}
  
  
  
  

