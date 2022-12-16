package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class AppendDisplayNames extends Common {
  void f(int sorted) {
    if (sorted <= 0) {
      return;
    }
    int sb = 0;
    int R = 0;
    mostPreciseBound(R <= sorted + 2 * sorted);
    lessPreciseBound(R <= MAX * sorted + MAX);
    int iterator = sorted;
    while (iterator > 0) {
      int entry = ndInt2(1, iterator);
      iterator -= entry;

      for (int i = 0; i < entry; i++) {
        if (ndBool()) {
          sb += 2;
          R = R + 2;
        } else {
          sb++;
          R = R + 1;
        }
      }
      if (ndBool()) {
        sb++;
        R = R + 1;
      }
    }
  }
}
