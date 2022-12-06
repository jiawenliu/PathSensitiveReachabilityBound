int nondet();

int Example3(int n, int m) {
  if(0<m<n) {
    int i = 0; int j = 0;
    while (i<n && nondet()) {
      if (j<m)
        j++;
      else {
        j = 0;
        i++;
      }
    }
  }
  return 0;
}

