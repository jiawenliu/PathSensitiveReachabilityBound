package brbo.benchmarks.string.guava;

import brbo.benchmarks.Common;

abstract public class PadStart extends Common {
  void f(int string, int minLength) {
    if (string <= 0 || minLength <= 0) {
      return;
    }
    if (string >= minLength) {
      return;
    }
    int sb = 0;
    int R = 0;
    mostPreciseBound(R <= minLength);
    lessPreciseBound(R <= MAX * minLength + MAX * string + MAX);
    for (int i = string; i < minLength; i++) {
      sb++;
      R = R + 1;
    }
    sb += string;
    R = R + string;
  }
}
