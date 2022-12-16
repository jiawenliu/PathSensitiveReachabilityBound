package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class DiffResultToString extends Common {
  void f(int diff) {
    if (diff <= 0) {
      return;
    }
    int lhsBuilder = 0;
    int rhsBuilder = 0;
    int R = 0;
    mostPreciseBound(R <= diff);
    lessPreciseBound(R <= MAX * diff+ MAX);
    int iterator = diff;
    while (iterator > 0) {
      int entry = ndInt2(1, iterator);
      iterator -= entry;
      int fieldName = ndInt2(1, entry);
      int left = ndInt2(1, entry - fieldName);
      int right = ndInt2(1, entry - fieldName - left);
      lhsBuilder += fieldName + left;
      R = R + (fieldName + left);
      rhsBuilder += fieldName + right;
      R = R + (fieldName + right);
    }
  }
}
