package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic020 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= (1 + n * n));
    lessPreciseBound(R <= (1 + n * n) * 8);
    R = R + 1;
    for (int i0 = 0; i0 < n; i0++) {
      R = R + n;
    }
  }
}