package brbo.benchmarks.basic;

import brbo.benchmarks.Common;

abstract class Test02 extends Common {
  void f(int n, int m) {
    if (n <= 0 || m <= 0) {
      return;
    }
    int R = 0;
    int i = 0;
    mostPreciseBound(R <= m + n);
    lessPreciseBound(R <= MAX * m + MAX * n + MAX);
    while (i < n) {
      i++;
      R = R + 1;
    }

    i = 0;
    while (i < m) {
      i++;
      R = R + 1;
    }
  }
}