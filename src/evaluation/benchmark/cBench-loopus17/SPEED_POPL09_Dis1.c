void Dis1(int x0 , int y0 , int n, int m) {
  //int c1 = 0; int c2 = 0;
  int x = x0; int y = y0;
  while (x < n) {
    if (y < m)
      y = y + 1; //c1 ++;
    else
      x = x + 1; //c2 ++;
  }
}

//Bound Max(0, n − x0 ) + Max(0, m − y0 ) 
