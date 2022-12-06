int nondet();

void NestedSingle(int n) {
  int x = 0;
  while (x < n) {
    while (x < n && nondet()) {
      x = x + 1;
    }
    x = x + 1;
  }
}
//Bound: n

