package brbo.benchmarks.string.guava;

import brbo.benchmarks.Common;

abstract public class LenientFormat extends Common {
  void f(int template, int args) {
    if (template <= 0 || args <= 0) {
      return;
    }
    int builder = 0;
    int R = 0;
    mostPreciseBound(R <= template + args + 2 + 2 * args);
    lessPreciseBound(R <= MAX * template + MAX * args + MAX);
    int templateStart = 0;
    int i = 0;
    while (i < args) {
      int placeholderStart = ndBool() ? -1 : ndInt2(templateStart, template - 1);
      if (placeholderStart == -1) {
        break;
      }
      builder += placeholderStart - templateStart;
      R = R + (placeholderStart - templateStart);
      builder++;
      R = R + 1;
      i++;
      templateStart = placeholderStart + 2;
    }
    builder += template - templateStart;
    R = R + (template - templateStart);
    if (i < args) {
      builder++;
      R = R + 1;
      builder++;
      R = R + 1;
      i++;
      while (i < args) {
        builder++;
        R = R + 1;
        builder++;
        R = R + 1;
        i = i + 1;
      }
    }
  }
}
