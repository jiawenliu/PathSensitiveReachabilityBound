package brbo.benchmarks.basic;

import brbo.benchmarks.Common;

abstract class Test04 extends Common {
  void f(int n, int m, int l) {
    if (n <= 0 || m <= 0 || l <= 0) {
      return;
    }
    int R = 0;
    int i = 0;
    mostPreciseBound(R <= n * m + l);
    while (i < n) {
      int j = 0;
      while (j < m) {
        j++;
        R = R + 1;
      }
      i++;
    }

    for (int k = 0; k < l; k++) {
      R = R + 1;
    }
  }
}