#include <stdio.h>

int main(void)
{
  int nombre = 0;

  while (nombre <= 20)
  {
    printf ("[%d] ", nombre);
    nombre += 2;
  }

  return 0;
}
