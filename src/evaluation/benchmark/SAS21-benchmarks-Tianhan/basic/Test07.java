package brbo.benchmarks.basic;

import brbo.benchmarks.Common;

abstract class Test07 extends Common {
  void f(int n, int m) {
    if (n <= 0 || m <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= n + 2 * m);
    int iterator = n;
    while (iterator > 0) {
      int entry = ndInt2(1, iterator);
      iterator -= entry;
      R = R + entry;
    }
    // If there are more than 1 loop that contains resource update commands, then full amortization cannot infer a precise bound
    for (int i = 0; i < m; i++) {
      R = R + 1;
    }
    for (int i2 = 0; i2 < m; i2++) {
      R = R + 1;
    }
  }
}