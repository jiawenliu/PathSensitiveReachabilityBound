package brbo.benchmarks.string.guava;

import brbo.benchmarks.Common;

abstract public class PadEnd extends Common {
  void f(int string, int minLength) {
    if (string <= 0 || minLength <= 0) {
      return;
    }
    int sb = 0;
    int R = 0;
    mostPreciseBound(R <= minLength);
    lessPreciseBound(R <= MAX * minLength + MAX * string + MAX);
    sb += string;
    R = R + string;
    for (int i = string; i < minLength; i++) {
      sb++;
      R = R + 1;
    }
  }
}
