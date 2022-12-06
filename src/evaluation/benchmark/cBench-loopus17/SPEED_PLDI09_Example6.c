
int nondet();

int Example6(int m, int n) {
  int i = 0; int j = 0;
  int k = 0;
  while((i++) < n) {
    if (nondet()) while(j++<m);
    else
      while(k++<m);
  }
  return 0;
}

//Bound: n + 2m

