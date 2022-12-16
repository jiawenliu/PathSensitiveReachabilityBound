package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class ParseToken extends Common {
  void f(int pattern) {
    if (pattern <= 0) {
      return;
    }
    int buf = 0;
    int R = 0;
    mostPreciseBound(R <= pattern + 1);
    lessPreciseBound(R <= MAX * pattern + MAX);
    int i = ndInt2(0, pattern - 1);
    if (ndBool()) {
      buf++;
      R = R + 1;
      while (i + 1 < pattern) {
        if (ndBool()) {
          buf++;
          R = R + 1;
        }
        else {
          break;
        }
      }
    }
    else {
      buf++;
      R = R + 1;
      for (; i < pattern; i++) {
        if (ndBool()) {
          if (ndBool()) {
            i++;
            buf++;
            R = R + 1;
          }
        }
        else {
          if (ndBool()) {
            i--;
            break;
          }
          else {
            buf++;
            R = R + 1;
          }
        }
      }
    }
  }
}
