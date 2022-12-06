int nondet();

int Example4(int m, int n) {
  if(0<m<n) {
    int i = n;
    while (i>0 && nondet()) {
      if (i<m) i--;
      else i = i-m;
    }
  }
  return 0;
}

