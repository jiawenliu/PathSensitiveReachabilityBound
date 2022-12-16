package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic323 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= n * (1 * n + 1));
    lessPreciseBound(R <= n * (1 * n + 1) * 8);
    for (int i0 = 0; i0 < n; i0++) {
      for (int it0 = n, entry0 = ndInt2(1, it0); it0 > 0; it0 -= entry0, entry0 = ndInt2(1, it0)) {
        R = R + 1;
      }
      R = R + 1;
    }
  }
}