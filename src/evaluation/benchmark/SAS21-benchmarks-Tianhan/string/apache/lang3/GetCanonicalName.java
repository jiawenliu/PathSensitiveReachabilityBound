package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class GetCanonicalName extends Common {
  void f(int className) {
    if (className <= 0) {
      return;
    }
    int className_ = className;
    int dim = 0;
    while (ndBool() && className_ > 0) {
      dim++;
      className_--;
    }
    int canonicalClassNameBuffer = 0;
    int R = 0;
    mostPreciseBound(R <= className);
    lessPreciseBound(R <= MAX * className + MAX);
    if (dim < 1) {
      return;
    }
    for (int i = 0; i < dim; i++) {
      canonicalClassNameBuffer++;
      R = R + 1;
    }
  }
}
