package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class AppendRecursiveTypes extends Common {
  void f(int argumentTypes, int recursiveTypeIndexes) {
    if (argumentTypes <= 0 || recursiveTypeIndexes <= 0) {
      return;
    }
    int builder = 0;
    int R = 0;
    mostPreciseBound(R <= recursiveTypeIndexes + 1 + argumentTypes * 3);
    lessPreciseBound(R <= MAX * recursiveTypeIndexes + MAX * argumentTypes + MAX);
    for (int i = 0; i < recursiveTypeIndexes; i++) {
      int sep = 2;

      builder++;
      R = R + 1;
      for (int i2 = 1; i2 < 1; i2++) {
        builder += sep;
        R = R + sep;
        builder++;
        R = R + 1;
      }
    }

    int d = ndInt2(0, recursiveTypeIndexes);
    int argumentsFiltered = argumentTypes - d;

    if (argumentsFiltered > 0) {
      builder++;
      R = R + 1;
      int sep2 = 2;
      for (int i3 = 1; i3 < argumentsFiltered; i3++) {
        builder += sep2;
        R = R + sep2;
        builder++;
        R = R + 1;
      }
    }
  }
}
