package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class AppendAllTo extends Common {
  void f(int sep, int types) {
    if (sep <= 0 || types <= 0) {
      return;
    }
    int builder = 0;
    int R = 0;
    mostPreciseBound(R <= types * sep + types + 1);
    lessPreciseBound(R <= MAX * types * types +
        MAX * sep * sep +
        MAX * types * sep +
        MAX * types + MAX * sep +
        MAX
    );
    builder++;
    R = R + 1;
    for (int i = 1; i < types; i++) {
      builder += sep;
      R = R + sep;
      builder++;
      R = R + 1;
    }
  }
}
