package brbo.benchmarks.basic;

import brbo.benchmarks.Common;

abstract class Test06 extends Common {
  void f(int n, int m) {
    if (n <= 0 || m <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= 2 * n + m);
    lessPreciseBound(R <= 8 * n + m);
    int iterator = n;
    while (iterator > 0) {
      int entry = ndInt2(1, iterator);
      iterator -= entry;
      R = R + entry;
      R = R + 1; // Selective and full amortization can only verify the less precise bound
    }
    for (int i = 0; i < m; i++) {
      R = R + 1;
    }
  }
}