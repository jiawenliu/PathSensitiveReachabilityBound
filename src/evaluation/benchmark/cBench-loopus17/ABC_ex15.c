
int foo(int n, int m, int p, int q) {
  for (int i = n; i >= 1; i = i - 1)
    for (int j = 1; j <= m; j = j + 1)
      for (int k = i; k <= p; k = k + 1)
        for (int l = q; l <= j; l = l + 1);

  return 0;
}

