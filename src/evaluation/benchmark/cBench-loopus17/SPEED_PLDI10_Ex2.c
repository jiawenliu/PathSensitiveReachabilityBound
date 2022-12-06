int nondet();

void Ex2(int n, int m) {
  while (n > 0 && m > 0) {
    n--; m--;
    while (nondet()) {
      n--; m++;
    }
  }
}

//Bound: n
