int nondet();

void nestedLoop(int n, int m, int N) {
 if(0 <= n && 0 <= m && 0 <= N) {
   int i = 0;
   while (i < n && nondet()) {
     int j = 0;
     while (j < m && nondet()) {
       j = j + 1;
       int k = i;
       while (k < N && nondet()) {
         k = k + 1;
       }
       i = k;
     }
     i = i + 1;
   }
 }
}

//Bound: n + (m * n) + N

