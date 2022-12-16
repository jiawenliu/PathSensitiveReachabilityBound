package brbo.benchmarks.basic;

import brbo.benchmarks.Common;

abstract class Test01 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= n);
    lessPreciseBound(R <= MAX * n + MAX);
    int i = 0;
    while (i < n) {
      i++;
      R = R + 1;
    }
  }
}