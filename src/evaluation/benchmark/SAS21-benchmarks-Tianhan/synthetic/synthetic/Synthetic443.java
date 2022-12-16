package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic443 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= (n * (1 * n + n * (1 + 1)) + (n + (1 * n * n + 1 * n * n))));
    lessPreciseBound(R <= (n * (1 * n + n * (1 + 1)) + (n + (1 * n * n + 1 * n * n))) * 8);
    for (int i0 = 0; i0 < n; i0++) {
      for (int it0 = n, entry0 = ndInt2(1, it0); it0 > 0; it0 -= entry0, entry0 = ndInt2(1, it0)) {
        R = R + 1;
      }
      for (int i1 = 0; i1 < n; i1++) {
        R = R + 1;
        R = R + 1;
      }
    }
    for (int it1 = n, entry1 = ndInt2(1, it1); it1 > 0; it1 -= entry1, entry1 = ndInt2(1, it1)) {
      R = R + entry1;
      for (int it2 = n, entry2 = ndInt2(1, it2); it2 > 0; it2 -= entry2, entry2 = ndInt2(1, it2)) {
        R = R + 1;
        R = R + 1;
      }
    }
  }
}