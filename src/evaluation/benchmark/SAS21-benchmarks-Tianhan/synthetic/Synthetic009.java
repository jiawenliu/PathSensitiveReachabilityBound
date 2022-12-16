package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic009 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= (n * 1 + n * n * (1 + n)));
    lessPreciseBound(R <= (n * 1 + n * n * (1 + n)) * 8);
    for (int i0 = 0; i0 < n; i0++) {
      R = R + 1;
    }
    for (int i1 = 0; i1 < n; i1++) {
      for (int i2 = 0; i2 < n; i2++) {
        R = R + 1;
        R = R + n;
      }
    }
  }
}