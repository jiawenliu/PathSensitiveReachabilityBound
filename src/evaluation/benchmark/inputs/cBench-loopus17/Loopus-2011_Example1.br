int nondet();

void Example1(int n){
   int i = 0; int j;
   while(i < n) {
     i++; j = 0;
     while((i < n) && nondet()) {
	i++; j++;
     }
     if (j > 0)
       i--;
  }
}

