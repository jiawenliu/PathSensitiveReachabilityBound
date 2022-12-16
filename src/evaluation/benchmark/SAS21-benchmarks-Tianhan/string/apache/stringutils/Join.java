package brbo.benchmarks.string.apache.stringutils;

import brbo.benchmarks.Common;

abstract public class Join extends Common {
  void f(int array, int startIndex, int endIndex) {
    if (array <= 0 || startIndex <= 0 || endIndex <= 0 || endIndex - startIndex <= 0) {
      return;
    }
    int noOfItems = endIndex - startIndex;
    int R = 0;
    mostPreciseBound(R <= 1 + 2 * (endIndex - startIndex));
    lessPreciseBound(R <= MAX + MAX * endIndex + MAX * startIndex + MAX * array);
    int buf = 0;
    buf++;
    R = R + 1;
    for (int i = startIndex + 1; i < endIndex; i++) {
      buf++;
      R = R + 1;
      buf++;
      R = R + 1;
    }
  }
}
