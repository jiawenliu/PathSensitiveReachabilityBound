package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic039 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= n * (1 + 1));
    lessPreciseBound(R <= n * (1 + 1) * 8);
    for (int i0 = 0; i0 < n; i0++) {
      R = R + 1;
      R = R + 1;
    }
  }
}