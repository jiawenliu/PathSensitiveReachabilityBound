package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic003 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= n);
    lessPreciseBound(R <= n * 8);
    R = R + n;
  }
}