package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic418 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= ((1 * n + n * n) + 1));
    lessPreciseBound(R <= ((1 * n + n * n) + 1) * 8);
    for (int it0 = n, entry0 = ndInt2(1, it0); it0 > 0; it0 -= entry0, entry0 = ndInt2(1, it0)) {
      for (int it1 = entry0, entry1 = ndInt2(1, it1); it1 > 0; it1 -= entry1, entry1 = ndInt2(1, it1)) {
        R = R + 1;
      }
      R = R + n;
    }
    R = R + 1;
  }
}