int foo (int n, int m) {
  int x = 0; int y = 0;
  while (x < n) {
    if (y < m) y++;
    else { y = 0; x++; }
  }
  return 1;
}

