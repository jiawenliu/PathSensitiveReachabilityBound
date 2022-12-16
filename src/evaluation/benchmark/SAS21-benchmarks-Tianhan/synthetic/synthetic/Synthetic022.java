package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic022 extends Common {
  void f(int n) {
    if (n <= 0)
      return;
    int R = 0;
    mostPreciseBound(R <= (n + 1));
    lessPreciseBound(R <= (n + 1) * 8);
    R = R + n;
    R = R + 1;
  }
}