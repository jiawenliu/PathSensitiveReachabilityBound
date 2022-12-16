int nondet();

int foo(int n) {
 int flag = 1;
 while (flag) {
  flag = 0;
  while (n > 0 && nondet()) {
    n--;
    flag = 1;
  }
 }
 return 0;
}

//Bound according to paper: n+1
//Remark: The Example does not terminate!

