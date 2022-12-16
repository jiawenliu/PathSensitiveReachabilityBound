package brbo.benchmarks.containers.stac;

import brbo.benchmarks.Common;

public abstract class TemplateEngine2 extends Common {
  void replaceTagsBuilder(int text, int templateds, int separator) {
    if (text <= 0 || templateds <= 0 || separator <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= text * templateds + separator * templateds);
    lessPreciseBound(R <= MAX * text * templateds +
        MAX * separator * templateds +
        MAX * separator * text +
        MAX * text * text +
        MAX * separator * separator +
        MAX * templateds * templateds +
        MAX * text +
        MAX * templateds + MAX * separator +
        MAX
    );

    int i = 0;
    while (i < templateds) {
      int linePointer = 0;
      int startTagLocation = 0;
      int endTagLocation = 0;
      int stringBuilder = 0;
      while (endTagLocation <= text) {
        startTagLocation = ndInt2(endTagLocation + 1, text);
        endTagLocation = ndInt2(startTagLocation + 1, text);
        stringBuilder += startTagLocation - linePointer;
        R = R + (startTagLocation - linePointer);
        linePointer = endTagLocation;
      }
      stringBuilder += text - linePointer;
      R = R + (text - linePointer);
      i++;
      R = R + separator;
    }
  }
}
