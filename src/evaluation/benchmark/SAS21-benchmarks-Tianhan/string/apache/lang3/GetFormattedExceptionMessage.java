package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class GetFormattedExceptionMessage extends Common {
  void f(int baseMessage, int contextValues) {
    if (baseMessage <= 0 || contextValues <= 0) {
      return;
    }
    int buffer = 0;
    int R = 0;
    mostPreciseBound(R <= 3 + 6 * contextValues);
    lessPreciseBound(R <= MAX + MAX * contextValues + MAX * baseMessage);
    buffer++;
    R  = R + 1;
    buffer++;
    R = R + 1;
    int i = 0;
    int iterator = contextValues;
    while (iterator > 0) {
      int entry = ndInt2(1, iterator);
      int key = ndInt2(1, entry);
      int value = ndInt2(1, entry - key);
      iterator -= entry;

      buffer++;
      R = R + 1;
      buffer++;
      R = R + 1;
      i++;
      buffer++;
      R = R + 1;

      buffer += key;
      R = R + key;

      buffer++;
      R = R + 1;
      if (ndBool()) {
        buffer++;
        R = R + 1;
      }
      else {
        buffer += value;
        R = R + value;
      }
      buffer++;
      R = R + 1;
    }
    buffer++;
    R = R + 1;
  }
}
