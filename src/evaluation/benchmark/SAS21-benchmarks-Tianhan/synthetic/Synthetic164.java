package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic164 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= (n + n * 1));
    lessPreciseBound(R <= (n + n * 1) * 8);
    R = R + n;
    for (int i0 = 0; i0 < n; i0++) {
      R = R + 1;
    }
  }
}