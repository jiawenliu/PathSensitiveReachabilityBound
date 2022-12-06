int nondet();

void ex2(int m) {
  int x = m;
  int y = m;
  while (x>=2) {
    x--; y = y+x;
    while (y>=x && nondet())
	  y--;
    x--; y = y-x;
  }
}

