#include <stdio.h>

int main(void)
{

  int nombre = 1;


  while (nombre <= 50)
  {
    int calcul1 = nombre % 3;
    int calcul2 = nombre % 5;


    if (calcul1 == 0 && calcul2 == 0 )
    {
      printf ("FizzBuzz\n");
    }
    else if (calcul1  == 0)
    {
      printf ("Fizz\n");
    }
    else if (calcul2 == 0)
    {
      printf ("Buzz\n");
    }
    else if (calcul1 == 0 && calcul2 == 0)
    {
      printf ("FizzBuzz\n");
    }
    else 
    {
      printf ("%d\n", nombre);
    }



    nombre ++;
  }
  return 0;
}
