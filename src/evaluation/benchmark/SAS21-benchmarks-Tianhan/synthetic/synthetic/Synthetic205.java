package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic205 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= (((1 * n * n + n * n * n) + (n + n)) + n));
    lessPreciseBound(R <= (((1 * n * n + n * n * n) + (n + n)) + n) * 8);
    for (int it0 = n, entry0 = ndInt2(1, it0); it0 > 0; it0 -= entry0, entry0 = ndInt2(1, it0)) {
      for (int it1 = n, entry1 = ndInt2(1, it1); it1 > 0; it1 -= entry1, entry1 = ndInt2(1, it1)) {
        R = R + 1;
        R = R + n;
      }
      for (int it2 = entry0, entry2 = ndInt2(1, it2); it2 > 0; it2 -= entry2, entry2 = ndInt2(1, it2)) {
        R = R + entry2;
        R = R + entry2;
      }
    }
    R = R + n;
  }
}