package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic019 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= n * n);
    lessPreciseBound(R <= n * n * 8);
    for (int i0 = 0; i0 < n; i0++) {
      R = R + n;
    }
  }
}