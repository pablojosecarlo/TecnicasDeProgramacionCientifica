/*CTPC 2020 - UNQ*/
#include <stdio.h>

int main (void)
{
  int  x = 5;
  int *p1 = &x;

  printf (" La direccion almacenda en p1 es %p\n", p1);
  printf (" Lo apuntado por p1 es: %d\n", *p1);

  *p1=4;
  printf (" Lo apuntado por p1 es: %d\n", *p1);

  int  y = 5;
  p1 = &y;

  printf (" La nueva direccion almacenada en p1 es: %p\n", p1);
  printf (" Lo apuntado por p1 es: %d\n", *p1);

  y = 3;

  printf (" Lo apuntado por p1 es: %d\n", *p1);

  return 0;
}

