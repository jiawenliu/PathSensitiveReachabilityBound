int nondet();

void SimpleSingle2(int n, int m) {
  int x = 0; int y = 0;
  while (nondet()) {
    if (x < n) { x++; y++; }
    else if (y < m) { x++; y++; }
    else break;
  }
}

//Bound: n

