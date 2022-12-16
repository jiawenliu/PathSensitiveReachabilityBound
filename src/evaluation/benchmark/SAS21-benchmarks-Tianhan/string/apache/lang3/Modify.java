package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class Modify extends Common {
  void f(int str) {
    if (str <= 0) {
      return;
    }
    int buffer = 0;
    int R = 0;
    mostPreciseBound(R <= str);
    lessPreciseBound(R <= MAX * str + MAX);
    int i = 0;
    while (i < str) {
      if (ndBool()) {
        buffer++;
        R = R + 1;
      }
      i++;
    }
  }
}
