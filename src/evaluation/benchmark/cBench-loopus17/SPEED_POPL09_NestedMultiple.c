int nondet();

void NestedMultiple(int x0, int y0, int n, int m) {
  int x = x0; int y = y0;
  while (x < n) {
    while (y < m && nondet())
      y = y + 1;
    x = x + 1;
  }
}
//Bound: 
