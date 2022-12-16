package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic051 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= (1 + n * n));
    lessPreciseBound(R <= (1 + n * n) * 8);
    R = R + 1;
    for (int it0 = n, entry0 = ndInt2(1, it0); it0 > 0; it0 -= entry0, entry0 = ndInt2(1, it0)) {
      for (int i0 = 0; i0 < entry0; i0++) {
        R = R + n;
      }
    }
  }
}