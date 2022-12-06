int nondet();

void SequentialSingle(int n) {
  int x = 0;
  while (x < n && nondet())
    x = x + 1;
  while (x < n)
    x = x + 1;
}

//Bound: n

