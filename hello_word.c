#include <assert.h>
#include <stdio.h>

int
main ()
{
  double a, b;

  printf ("Insert two number (x y or x.x y.y)\n");

  int r
    = scanf ("%lg%lg", &a, &b);
  assert (r == 2);
  printf ((b != 0
           ? ("a + b = %lg\n"
              "a - b = %lg\n"
              "a * b = %lg\n"
              "a / b = %lg\n")
	   : ("a + b = %lg\n"
              "a - b = %lg\n"
              "a * b = %lg\n")),
          a + b, a - b, a * b,
	  (b != 0 ? a / b : 42));
  return 0;
}






