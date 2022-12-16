package brbo.benchmarks.basic;

import brbo.benchmarks.Common;

abstract class Test09 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= n);
    for (int i = 0, j = 0; i < n; i++, j++) {
      R = R + 1;
    }
  }
}