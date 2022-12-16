int nondet();

void cyclic(int id, int maxId) {
  if(0 <= id <= maxId) {
    int tmp = id + 1;
    while(tmp != id && nondet()) {
      if (tmp <= maxId)
        tmp = tmp + 1;
      else
        tmp = 0;
    }
  }
}

