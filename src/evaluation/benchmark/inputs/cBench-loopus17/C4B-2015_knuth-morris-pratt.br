/* Knuth-Morris-Pratt string searching */

int srch(int t[], int n, int p[], int m, int b[])
{
  int i = 0, j = 0, k = -1;

  while (i < n)
  {
    while (j >= 0 && t[i] != p[j]) {
       k = b[j];
       if(! (k > 0 && k <= j + 1))
	return i;
       j -= k;
    }
    i++, j++;
    if (j == m)
        break;
  }
  return i;
}

