
void ex14(int n, int m) {
  for (int i = n; i >= 1; i = i - 1)
	for (int j = 1; j <= m; j = j + 1)
	  for (int k = i; k <= i + j; k = k + 1)
		for (int l = 1; l <= k; l = l + 1)
		  ;
}
