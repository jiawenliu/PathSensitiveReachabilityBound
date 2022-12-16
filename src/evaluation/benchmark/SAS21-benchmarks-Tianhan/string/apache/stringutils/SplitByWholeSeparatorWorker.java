package brbo.benchmarks.string.apache.stringutils;

import brbo.benchmarks.Common;

abstract public class SplitByWholeSeparatorWorker extends Common {
  void f(int str, int separator, int max, boolean preserveAllTokens) {
    if (str <= 0 || separator <= 0 || max <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= str);
    lessPreciseBound(R <= MAX * str + MAX);
    int substrings = 0;
    int numberOfStrings = 0;
    int beg = 0;
    int end = 0;
    while (end < str) {
      end = ndBool() ? -1 : ndInt2(beg, str - 1);
      if (end > -1) {
        if (end > beg) {
          numberOfStrings++;
          if (numberOfStrings == max) {
            end = str;
            substrings += str - beg;
            R = R + (str - beg);
          }
          else {
            substrings += end - beg;
            R = R + (end - beg);
            beg = end + separator;
          }
        }
        else {
          if (preserveAllTokens) {
            numberOfStrings++;
            if (numberOfStrings == max) {
              end = str;
              substrings += str - beg;
              R = R + (str - beg);
            }
            else {
              ;
            }
          }
          beg = end + separator;
        }
      }
      else {
        substrings += str - beg;
        R = R + (str - beg);
        end = str;
      }
    }
  }
}
