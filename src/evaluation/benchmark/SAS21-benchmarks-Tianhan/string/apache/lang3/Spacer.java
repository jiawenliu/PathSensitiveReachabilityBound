package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class Spacer extends Common {
  void f(int spaces) {
    if (spaces <= 0) {
      return;
    }
    int sb = 0;
    int R = 0;
    mostPreciseBound(R <= spaces);
    lessPreciseBound(R <= MAX* spaces + MAX);
    for (int i = 0; i < spaces; i++) {
      sb++;
      R = R + 1;
    }
  }
}
