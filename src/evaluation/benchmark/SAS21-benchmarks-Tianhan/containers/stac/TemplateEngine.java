package brbo.benchmarks.containers.stac;

import brbo.benchmarks.Common;

public abstract class TemplateEngine extends Common {
  void replaceTagsBuilder(int text) {
    if (text <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= text);
    lessPreciseBound(R <= MAX * text + MAX);

    int linePointer = 0;
    int startTagLocation = 0;
    int endTagLocation = 0;
    int stringBuilder = 0;
    while (endTagLocation < text) {
      startTagLocation = ndInt2(endTagLocation + 1, text);
      endTagLocation = ndInt2(startTagLocation + 1, text);
      stringBuilder += startTagLocation - linePointer;
      R = R + (startTagLocation - linePointer);
      linePointer = endTagLocation;
    }
    stringBuilder += text - linePointer;
    R = R + (text - linePointer);
  }
  // No (Imprecise); Yes; Yes (Same as Brbo)
}
