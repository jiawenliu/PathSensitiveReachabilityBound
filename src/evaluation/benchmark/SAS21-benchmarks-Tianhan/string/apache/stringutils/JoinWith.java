package brbo.benchmarks.string.apache.stringutils;

import brbo.benchmarks.Common;

abstract public class JoinWith extends Common {
  void f(int separator, int n) {
    if (separator <= 0 || n <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= n * separator + n);
    lessPreciseBound(R <= MAX * n * n +
        MAX * n * separator +
        MAX * separator * separator +
        MAX * n + MAX * separator +
        MAX
    );
    int result = 0;
    int iterator = n;
    while (iterator > 0) {
      iterator--;
      result++;
      R = R + 1;
      if (iterator > 0) {
        result += separator;
        R = R + separator;
      }
    }
  }
}
