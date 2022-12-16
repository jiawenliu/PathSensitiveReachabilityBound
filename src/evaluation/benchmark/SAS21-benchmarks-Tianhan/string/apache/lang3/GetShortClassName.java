package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class GetShortClassName extends Common {
  void f(int className) {
    if (className <= 0) {
      return;
    }
    int arrayPrefix = 0;
    int R = 0;
    mostPreciseBound(R <= 2 * className);
    lessPreciseBound(R <= MAX * className + MAX);
    int className_ = className;
    while (ndBool() && className_ > 0) {
      className_--;
      arrayPrefix += 2;
      R = R + 2;
    }
  }
}
