#include <assert.h>
#include <math.h>
#include <stdio.h>

int
main ()
{
  int n = 1, cur, min, max;
  double sum, sum_sq;

  int r  = scanf ("%d", &cur);
  assert (r == 1);
  sum = min = max = cur;
  sum_sq = pow (cur, 2);

  while (1 == (r = scanf ("%d", &cur))) {
    if (cur < min) {
      min = cur;
    } else if (cur > max) {
      max = cur;
    }
    ++n;
    sum     += cur;
    sum_sq  += pow (cur, 2);
  }
  assert (r == EOF);
  assert (! ferror (stdin));

  printf (("Range:  [%d, %d]\n"
           "Count:  %d\n"
           "Mean:   %lg\n"
           "StdDev: %lg\n"),
          min, max, n, sum / n,
          sqrt (sum_sq / n - pow (sum / n, 2)));

  return 0;
}
