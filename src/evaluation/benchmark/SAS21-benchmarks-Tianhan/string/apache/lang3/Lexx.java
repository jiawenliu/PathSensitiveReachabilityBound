package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class Lexx extends Common {
  void f(int format) {
    if (format <= 0) {
      return;
    }
    int buffer = 0;
    int R = 0;
    mostPreciseBound(R <= format);
    lessPreciseBound(R <= MAX * format + MAX);
    int inLiteral = 0;
    for (int i = 0; i < format; i++) {
      if (inLiteral > 0 && ndBool()) {
        buffer++;
        R = R + 1;
        continue;
      }
      if (ndBool()) {
        if (inLiteral > 0) {
          inLiteral = 0;
        }
        else {
          R = R + (-buffer);
          buffer = 0;
          inLiteral = 1;
        }
      }
    }
  }
}
