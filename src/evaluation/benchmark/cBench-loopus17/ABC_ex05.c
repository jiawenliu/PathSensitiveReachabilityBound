int foo(int n) {

  for (int i = 1; i <= n; i = i + 1)
    for (int j = 1; j <= i; j = j + 1);

  return 0;
}

