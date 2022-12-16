package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic052 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= (n + n * n * (1 + 1)));
    lessPreciseBound(R <= (n + n * n * (1 + 1)) * 8);
    R = R + n;
    for (int i0 = 0; i0 < n; i0++) {
      for (int i1 = 0; i1 < n; i1++) {
        R = R + 1;
        R = R + 1;
      }
    }
  }
}