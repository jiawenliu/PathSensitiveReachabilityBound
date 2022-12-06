int foo(int n, int m) {
  int x = 0;
  while (x < n) {
    int y = 0; x = x + 1;
    while (y < m)
      y = y + 1;
  }
  return 0;
}

