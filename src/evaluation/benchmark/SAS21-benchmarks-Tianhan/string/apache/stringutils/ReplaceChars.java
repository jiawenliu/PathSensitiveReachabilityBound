package brbo.benchmarks.string.apache.stringutils;

import brbo.benchmarks.Common;

abstract public class ReplaceChars extends Common {
  void f(int str, int searchChars, int replaceChars) {
    if (str <= 0 || searchChars <= 0 || replaceChars <= 0) {
      return;
    }
    boolean modified = false;
    int buf = 0;
    int R = 0;
    mostPreciseBound(R <= str);
    lessPreciseBound(R <= MAX * str + MAX);
    for (int i = 0; i < str; i++) {
      int index = ndBool() ? -1 : ndInt2(0, searchChars - 1);
      if (index >= 0) {
        modified = true;
        if (index < replaceChars) {
          buf++;
          R = R + 1;
        }
      } else {
        buf++;
        R = R + 1;
      }
    }
  }
}
