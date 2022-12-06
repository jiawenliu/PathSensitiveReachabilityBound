int nondet();

void Ex5(int n) {
 int i = 0;
 while (i < n) {
  int flag = 0;
  while (nondet()) {
    if (nondet()) {
      flag = 1;
      n--;
    }
  }
  if (!flag) i++;
 }
}

//Bound for outer loop: n
//Bound for inner loop: none
//Bound: none

