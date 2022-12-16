package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class Squeeze extends Common {
  void f(int str) {
    if (str <= 0) {
      return;
    }
    int buffer = 0;
    int R = 0;
    mostPreciseBound(R <= str);
    lessPreciseBound(R <= MAX * str + MAX);
    for (int i = 1; i < str; i++) {
      if (ndBool()) {
        if (ndBool()) {
          continue;
        }
        if (ndBool()) {
          if (ndBool()) {
            continue;
          }
        }
      }
      buffer++;
      R = R + 1;
    }
  }
}
