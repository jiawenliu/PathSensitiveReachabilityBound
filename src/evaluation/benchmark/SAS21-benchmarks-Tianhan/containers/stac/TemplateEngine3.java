package brbo.benchmarks.containers.stac;

import brbo.benchmarks.Common;

public abstract class TemplateEngine3 extends Common {
  void replaceTagsBuilder(int text, int ts, int sep, int tags, int rep) {
    if (text <= 0 || ts <= 0 || sep <= 0 || tags <= 0 || rep <= 0) {
      return;
    }
    int R = 0;
    mostPreciseBound(R <= ts * (text + tags * rep + sep));
    lessPreciseBound(R <= MAX * text * ts +
        MAX * text * sep +
        MAX * text * tags +
        MAX * text * rep +
        MAX * ts * sep +
        MAX * ts * tags +
        MAX * ts * rep +
        MAX * sep * tags +
        MAX * sep * rep +
        MAX * tags * rep+
        MAX * text +
        MAX * ts +
        MAX * sep +
        MAX * tags +
        MAX * rep +
        MAX
    );

    int i = 0;
    while (i < ts) {
      int p = 0;
      int l = 0;
      int r = 0;
      int stringBuilder = 0;
      while (r <= text) {
        l = ndInt2(p, text);
        r = ndInt2(l, text);
        stringBuilder += l - p;
        R = R + (l - p);
        stringBuilder += rep;
        R = R + rep;
        p = r;
      }
      stringBuilder += text - p;
      R = R + (text - p);
      R = R + sep;
      i++;
    }
  }
}
