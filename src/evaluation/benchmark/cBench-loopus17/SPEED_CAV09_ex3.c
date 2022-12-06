
int nondet();

int foo(int n) {
  int x = 0;
  while (x < n && nondet()) {
    int y = x;
    while (y < n && nondet()) {
      y = y + 1;
    }
    x = y + 1;
  }
  return 1;
}

//bound according to paper: n
