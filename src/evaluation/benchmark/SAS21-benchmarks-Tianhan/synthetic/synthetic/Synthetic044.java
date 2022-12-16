package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic044 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= (n + n * n));
    lessPreciseBound(R <= (n + n * n) * 8);
    R = R + n;
    for (int i0 = 0; i0 < n; i0++) {
      R = R + n;
    }
  }
}