package brbo.benchmarks.synthetic;
import brbo.benchmarks.Common;
public abstract class Synthetic024 extends Common {
  void f(int n) {
    if (n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= (1 + 1));
    lessPreciseBound(R <= (1 + 1) * 8);
    R = R + 1;
    R = R + 1;
  }
}