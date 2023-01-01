package brbo.benchmarks.string.apache.stringutils;

import brbo.benchmarks.Common;

abstract public class SplitWorker extends Common {
  void f(int str, boolean preserveAllTokens) {
    if (str <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= str);
    lessPreciseBound(R <= MAX * str + MAX);
    int list = 0;
    int i = 0;
    int start = 0;
    boolean match = false;
    boolean lastMatch = false;
    while (i < str) {
      if (ndBool()) {
        if (match || preserveAllTokens) {
          list += i - start;
          R = R + (i - start);
          match = false;
          lastMatch = true;
        }
        ++i;
        start = i;
        continue;
      }
      lastMatch = false;
      match = true;
      i++;
    }
    if (match || preserveAllTokens && lastMatch) {
      list += i - start;
      R = R + (i - start);
    }
  }
}
