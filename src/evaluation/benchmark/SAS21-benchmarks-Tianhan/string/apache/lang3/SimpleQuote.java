package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class SimpleQuote extends Common {
  void f(int value) {
    if (value <= 0) {
      return;
    }
    int sb = 0;
    int R = 0;
    mostPreciseBound(R <= value * 2 + 1);
    lessPreciseBound(R <= MAX * value + MAX);
    for (int i = 0; i < value; i++) {
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
