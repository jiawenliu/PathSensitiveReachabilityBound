package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic495 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= (n + (n * 1 + n * n)));
    lessPreciseBound(R <= (n + (n * 1 + n * n)) * 8);
    R = R + n;
    for (int it0 = n, entry0 = ndInt2(1, it0); it0 > 0; it0 -= entry0, entry0 = ndInt2(1, it0)) {
      for (int i0 = 0; i0 < entry0; i0++) {
        R = R + 1;
      }
      for (int i1 = 0; i1 < entry0; i1++) {
        R = R + n;
      }
    }
  }
}