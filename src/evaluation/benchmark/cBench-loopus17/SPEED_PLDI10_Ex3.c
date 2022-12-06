void Ex3(int n, int A[]) {
  while (n > 0) {
    int t = A[n];
    while (n > 0 && t == A[n])
      n--;
  }
}

//Bound: n

