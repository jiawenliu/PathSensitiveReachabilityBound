package brbo.benchmarks.string.apache.lang3;

import brbo.benchmarks.Common;

abstract public class AppendFullDigits extends Common {
  void f(int value, int minFieldWidth) {
    if (minFieldWidth <= 0) {
      return;
    }
    int buffer = 0;
    int R = 0;
    mostPreciseBound(R <= minFieldWidth);
    lessPreciseBound(R <= MAX * minFieldWidth + MAX * value);
    if (value < 10000) {
      int nDigits = 4;
      if (value < 1000) {
        --nDigits;
        if (value < 100) {
          --nDigits;
          if (value < 10) {
            --nDigits;
          }
        }
      }

      for (int i = minFieldWidth - nDigits; i > 0; --i) {
        buffer++;
        R = R + 1;
      }
      if (nDigits == 4) {
        buffer++;
        R = R + 1;
      }
      else {
        if (nDigits == 3) {
          if (value >= 100) {
            buffer++;
            R = R + 1;
          }
          else {
            buffer++;
            R = R + 1;
          }
        }
        else {
          if (nDigits == 2) {
            if (value >= 10) {
              buffer++;
              R = R + 1;
            }
            else {
              buffer++;
              R = R + 1;
            }
          }
          else {
            if (nDigits == 1) {
              buffer++;
              R = R + 1;
            }
            else {
              ;
            }
          }
        }
      }
    }
    else {
      int digit = 0;
      while (value != 0) {
        digit++;
        value = value / 10;
      }
      while (digit < minFieldWidth) {
        buffer++;
        R = R + 1;
        --minFieldWidth;
      }

      digit--;
      while (digit >= 0) {
        buffer++;
        R = R + 1;
        digit--;
      }
    }
  }
}
