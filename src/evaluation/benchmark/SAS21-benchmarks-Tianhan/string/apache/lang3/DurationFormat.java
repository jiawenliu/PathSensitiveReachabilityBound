package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class DurationFormat extends Common {
  void f(int tokens, int years, int months) {
    if (tokens <= 0 || years <= 0 || months <= 0) {
      return;
    }
    int buffer = 0;
    int R = 0;
    mostPreciseBound(R <= tokens + tokens * (years + months));
    lessPreciseBound(R <= MAX * tokens * tokens +
        MAX * years * years + MAX * months * months +
        MAX * tokens * years + MAX * tokens * months +
        MAX * months + MAX * years + MAX * tokens + MAX
    );
    int iterator = tokens;
    while (iterator > 0) {
      int entry = ndInt2(1, iterator);
      iterator -= entry;
      if (ndBool()) {
        buffer += entry;
        R = R + entry;
      } else {
        if (ndBool()) {
          buffer += years;
          R = R + years;
        } else {
          if (ndBool()) {
            buffer += months;
            R = R + months;
          }
        }
      }
    }
  }
}
