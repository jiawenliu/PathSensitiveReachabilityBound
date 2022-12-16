int nondet();

int Example2(int n, int m) {
  if(n>0 && m>0) {
    int v1 = n; int v2 = 0;
    while (v1>0 && nondet()) {
      if (v2<m) {
        v2++; v1--;
      } else
        v2=0;
    }
  }
  return 0;
}


