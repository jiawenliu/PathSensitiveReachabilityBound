int nondet();

void fig2(int m) {
  int i = m;
  int n = 0;
  while(i > 0) {
    i--;
    if(nondet())
      n++;
    else
      while(n > 0 && nondet())
        n--;
  }
}

