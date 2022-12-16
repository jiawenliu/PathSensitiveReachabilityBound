int nondet();

void twoCounters(unsigned int n) {
  int x = n;
  int y = 0;
  while(x > 0) {
    if(y > 0 && nondet()) {
      y = y - 1;
    } else {
      x = x - 1;
      y = y + 1;
    }
  } 
}

