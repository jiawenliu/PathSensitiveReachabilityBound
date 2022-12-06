int foo(int n, int m) {
  for (int i = n; i >= 1; i = i - 1)
    for (int j = 1; j <= m; j = j + 1);

  return 0;
}

