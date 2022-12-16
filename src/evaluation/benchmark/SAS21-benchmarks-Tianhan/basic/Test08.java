package brbo.benchmarks.basic;

import brbo.benchmarks.Common;

abstract class Test08 extends Common {
  void f(int n, int m) {
    if (n <= 0 || m <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= n + m);
    int iterator = n;
    while (iterator > 0) {
      int entry = ndInt2(1, iterator);
      iterator -= entry;
      if (ndBool()) // Full amortization can infer the most precise bound
        R = R + entry;
    }
    for (int i = 0; i < m; i++) {
      R = R + 1;
    }
  }
}